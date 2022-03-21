#ifndef LINKEDINTLIST_H_
#define LINKEDINTLIST_H_

#include <memory>

#include "IntList.h"

using std::shared_ptr;
using std::weak_ptr;

namespace intlist333 {

// LinkedIntList is an implementation of
// the IntList abstract class. Implemented using
// a doubly linked list
class LinkedIntList : public IntList {
 public:
  // default constructor
  LinkedIntList(): num_elements_(0), head_(nullptr), tail_() { }

  // explicitly disabled
  LinkedIntList(const LinkedIntList& other) = delete;
  LinkedIntList& operator=(const LinkedIntList& other) = delete;

  // Empty destructor
  // smart pointers should clean everything up
  virtual ~LinkedIntList() { }

  // override each of the functions
  // that are part of the IntList abstract class
  int num_elements() const override { return num_elements_; }

  void Push(const int payload) override;

  void Append(const int payload) override;

  bool Pop(int* const payload_ptr) override;

  bool Slice(int* const payload_ptr) override;

 private:
  int num_elements_;
  struct Node {
    int payload;
    shared_ptr<Node> next;
    weak_ptr<Node> prev;
  };
  shared_ptr<Node> head_;
  weak_ptr<Node> tail_;
};

}  // namespace intlist333

#endif  // LINKEDINTLIST_H_