#include "SocketUtil.h"

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int Listen(char* portnum, int* sock_family) {
  // Populate the "hints" addrinfo structure for getaddrinfo().
  // ("man addrinfo")
  struct addrinfo hints;
  memset(&hints, 0, sizeof(struct addrinfo));
  hints.ai_family = AF_INET6;       // IPv6 (also handles IPv4 clients)
  hints.ai_socktype = SOCK_STREAM;  // stream
  hints.ai_flags = AI_PASSIVE;      // use wildcard "INADDR_ANY"
  hints.ai_flags |= AI_V4MAPPED;    // use v4-mapped v6 if no v6 found
  hints.ai_protocol = IPPROTO_TCP;  // tcp protocol
  hints.ai_canonname = nullptr;
  hints.ai_addr = nullptr;
  hints.ai_next = nullptr;

  // Use argv[1] as the string representation of our portnumber to
  // pass in to getaddrinfo().  getaddrinfo() returns a list of
  // address structures via the output parameter "result".
  struct addrinfo* result;
  int res = getaddrinfo(nullptr, portnum, &hints, &result);

  // Did addrinfo() fail?
  if (res != 0) {
    cerr << "getaddrinfo() failed: ";
    cerr << gai_strerror(res) << endl;
    return -1;
  }

  // Loop through the returned address structures until we are able
  // to create a socket and bind to one.  The address structures are
  // linked in a list through the "ai_next" field of result.
  int listen_fd = -1;
  for (struct addrinfo* rp = result; rp != nullptr; rp = rp->ai_next) {
    listen_fd = socket(rp->ai_family,
                       rp->ai_socktype,
                       rp->ai_protocol);
    if (listen_fd == -1) {
      // Creating this socket failed.  So, loop to the next returned
      // result and try again.
      cerr << "socket() failed: " << strerror(errno) << endl;
      listen_fd = -1;
      continue;
    }

    // Configure the socket; we're setting a socket "option."  In
    // particular, we set "SO_REUSEADDR", which tells the TCP stack
    // so make the port we bind to available again as soon as we
    // exit, rather than waiting for a few tens of seconds to recycle it.
    int optval = 1;
    setsockopt(listen_fd, SOL_SOCKET, SO_REUSEADDR,
               &optval, sizeof(optval));

    // Try binding the socket to the address and port number returned
    // by getaddrinfo().
    if (bind(listen_fd, rp->ai_addr, rp->ai_addrlen) == 0) {
      // Bind worked!  Return to the caller the address family.
      *sock_family = rp->ai_family;
      break;
    }

    // The bind failed.  Close the socket, then loop back around and
    // try the next address/port returned by getaddrinfo().
    close(listen_fd);
    listen_fd = -1;
  }

  // Free the structure returned by getaddrinfo().
  freeaddrinfo(result);

  // If we failed to bind, return failure.
  if (listen_fd <= 0)
    return listen_fd;

  // Success. Tell the OS that we want this to be a listening socket.
  if (listen(listen_fd, SOMAXCONN) != 0) {
    cerr << "Failed to mark socket as listening: ";
    cerr << strerror(errno) << endl;
    close(listen_fd);
    return -1;
  }

  // Return to the client the listening file descriptor.
  return listen_fd;
}

int WrappedRead(int fd, unsigned char* buf, int readlen) {
  int res;
  while (1) {
    res = read(fd, buf, readlen);
    if (res == -1) {
      if ((errno == EAGAIN) || (errno == EINTR))
        continue;
    }
    break;
  }
  return res;
}

int WrappedWrite(int fd, unsigned char* buf, int writelen) {
  int res, written_so_far = 0;

  while (written_so_far < writelen) {
    res = write(fd, buf + written_so_far, writelen - written_so_far);
    if (res == -1) {
      if ((errno == EAGAIN) || (errno == EINTR))
        continue;
      break;
    }
    if (res == 0)
      break;
    written_so_far += res;
  }
  return written_so_far;
}