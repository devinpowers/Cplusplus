
#include <pthread.h>
#include <string>
#include "SimpleQueue.h"

using std::string;
using std::shared_ptr;

SimpleQueue::SimpleQueue() {
  this->size_ = 0;
  this->front_.reset();
  this->end_.reset();
  pthread_mutex_init(&this->mtx_, nullptr);
}

SimpleQueue::~SimpleQueue() {
  pthread_mutex_destroy(&this->mtx_);
}

void SimpleQueue::Enqueue(const string& item) {
  shared_ptr<Node> new_node(new Node());
  new_node->next.reset();
  new_node->item = item;
  pthread_mutex_lock(&this->mtx_);
  if (this->end_) {
    this->end_->next = new_node;
  } else  {
    this->front_ = new_node;
  }
  this->end_ = new_node;
  this->size_++;
  pthread_mutex_unlock(&this->mtx_);
}

bool SimpleQueue::Dequeue(string* const result) {
  pthread_mutex_lock(&this->mtx_);
  if (this->size_ == 0) {
    pthread_mutex_unlock(&this->mtx_);
    return false;
  }
  *result = this->front_->item;
  if (this->end_ == this->front_) {
    this->end_ = this->front_ = this->front_->next;
  } else {
    this->front_ = this->front_->next;
  }
  this->size_--;
  pthread_mutex_unlock(&this->mtx_);
  return true;
}

int SimpleQueue::Size() const {
  pthread_mutex_lock(&this->mtx_);
  int result = this->size_;
  pthread_mutex_unlock(&this->mtx_);
  return result;
}

bool SimpleQueue::IsEmpty() const {
  pthread_mutex_lock(&this->mtx_);
  bool result = this->size_ == 0;
  pthread_mutex_unlock(&this->mtx_);
  return result;
}