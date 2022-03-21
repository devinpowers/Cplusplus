#include "LinkedIntList.h"

#include <memory>

namespace intlist333 {

void LinkedIntList::Push(const int payload) {
  // allocate new node
  shared_ptr<Node> new_node(new Node);
  new_node->payload = payload;
  if (this->num_elements() == 0) {
    new_node->next.reset();
    new_node->prev.reset();
    this->head_ = new_node;
    this->tail_ = new_node;
  } else {
    new_node->next = this->head_;
    new_node->prev.reset();
    this->head_ = new_node;
  }
  this->num_elements_++;
}

void LinkedIntList::Append(const int payload) {
  if (this->num_elements() == 0) {
    this->Push(payload);
  } else {
    shared_ptr<Node> new_node(new Node);
    new_node->payload = payload;
    new_node->next.reset();
    new_node->prev = this->tail_;
    this->tail_.lock()->next = new_node;
    this->tail_ = new_node;
    this->num_elements_++;
  }
}

bool LinkedIntList::Pop(int* const payload_ptr) {
  if (this->num_elements() == 0) {
    return false;
  } else {
    *payload_ptr = this->head_->payload;
    if (this->num_elements() == 1) {
      this->head_.reset();
      this->tail_.reset();
    } else {
      this->head_ = this->head_->next;
    }
    this->num_elements_--;
    return true;
  }
}

bool LinkedIntList::Slice(int* const payload_ptr) {
  if (this->num_elements() <= 1) {
    return this->Pop(payload_ptr);
  } else {
    shared_ptr<Node> old_tail = this->tail_.lock();
    *payload_ptr = old_tail->payload;
    this->tail_ = old_tail->next;
    this->num_elements_--;
    return true;
  }
}

}   // namespace intlist333