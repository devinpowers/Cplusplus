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

#ifndef _SIMPLEQUEUE_H_
#define _SIMPLEQUEUE_H_

#include <string>
#include <memory>

using std::string;
using std::shared_ptr;

// A simple FIFO queue class that stores strings
class SimpleQueue {
 public:
  SimpleQueue();

  ~SimpleQueue();

  // Enqueues the given item
  void Enqueue(const string& item);

  // Dequeues the item at the front of the queue
  // and stores it at the location pointed to by result.
  // Returns true if there was an item to return and
  // false if the queue was empty.
  bool Dequeue(string* const result);

  // Returns the size of the queue
  int Size() const;

  // Returns true if the queue if empty, false otherwise
  bool IsEmpty() const;

 private:
  struct Node {
    string item;
    shared_ptr<Node> next;
  };
  shared_ptr<Node> front_;
  shared_ptr<Node> end_;
  int size_;
  mutable pthread_mutex_t mtx_;
};  // class SimpleQueue

#endif  // _SIMPLEQUEUE_H_
