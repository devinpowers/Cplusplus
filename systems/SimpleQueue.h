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