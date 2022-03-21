/*
 * Copyright ©2022 Justin Hsia.  All rights reserved.  Permission is
 * hereby granted to students registered for University of Washington
 * CSE 333 for use solely during Winter Quarter 2022 for purposes of
 * the course.  No other use, copying, distribution, or modification
 * is permitted without prior written consent. Copyrights for
 * third-party components of this work must be honored.  Instructors
 * interested in reusing these course materials should contact the
 * author.
 */

#ifndef SOCKETUTIL_H_
#define SOCKETUTIL_H_

#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>

// Performs a DNS lookup with hostname "name" and no service.
// Initializes the port of the first resulting struct sockaddr to
// "port" and returns it via the output parameter "ret_addr". The
// returned socket address may be IPv4 or IPv6.
// Returns the length of the socket address through output parameter
// "ret_addrlen".
//
// On failure, returns false.  On success, returns true.
bool LookupName(char* name,
                unsigned short port,
                struct sockaddr_storage* ret_addr,
                size_t* ret_addrlen);

// Creates a socket and connects to the remote host and port specified
// by "addr" and "addrlen" via TCP. Returns the file descriptor of the
// connected socket through the output parameter "ret_fd".
//
// On failure, returns false.  On success, returns true.
bool Connect(const struct sockaddr_storage& addr,
             const size_t& addrlen,
             int* ret_fd);

// A wrapper around "read" that shields the caller from dealing
// with the ugly issues of partial reads, EINTR, EAGAIN, and so
// on.
//
// Attempts to read "readlen" bytes from the file descriptor fd
// into the buffer "buf".  Returns the number of bytes actually
// read.  On fatal error, returns -1.  If EOF is hit and no
// bytes have been read, returns 0.  Might read fewer bytes
// than requested (for instance, if we are close to the end of
// the file).
// You may assume that buf has enough space for writelen bytes.
int WrappedRead(int fd, unsigned char* buf, int readlen);

// A wrapper around "write" that shields the caller from dealing
// with the ugly issues of partial writes, EINTR, EAGAIN, and so
// on.
//
// Writes "writelen" bytes to the file descriptor fd from
// the buffer "buf".  Blocks the caller until either writelen
// bytes have been written, or an error is encountered.  Returns
// the total number of bytes written. If this number is less
// than writelen, it's because some fatal error was encountered,
// like the connection being dropped.
// You may assume that buf has enough space for writelen bytes.
int WrappedWrite(int fd, unsigned char* buf, int writelen);

#endif  // SOCKETUTIL_H_