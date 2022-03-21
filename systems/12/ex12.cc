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

#include <pthread.h>

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <thread>
#include <string>
#include <chrono>

#include "SimpleQueue.h"

using std::cout;
using std::cerr;
using std::endl;
using std::string;

static constexpr int kNumSnacks = 6;
static SimpleQueue queue;               // queue of snacks
static unsigned int seed = time(nullptr);  // initialize random sleep time
static pthread_mutex_t write_lock;      // mutex for cout

// Use cout in a thread-safe manner
void thread_safe_print(const string& str);

// Produces 6 snacks of the given type
void producer(const string& snack_type);

// Start a producer thread by calling producer(*arg_ptr)
// Terminate the thread when the producer function finishes.
void* producer_start(void* arg_ptr);

// Eats 2*kNumSnacks snacks
void consumer();

// Start the consumer thread by calling consumer() and terminate
// the thread when the consumer finishes.
void* consumer_start(void* arg_ptr);

// Start two producer threads and a consumer thread.
// Wait for them to terminate and then exit.
int main(int argc, char** argv) {
  srand(time(nullptr));
  pthread_mutex_init(&write_lock, nullptr);

  // Make the two producers and the single consumer all run concurrently
  // by using pthreads
  string snack_type_1 = "Nian gao";
  string snack_type_2 = "Tangyuan";
  pthread_t producer_thd1, producer_thd2, consumer_thd;
  if (pthread_create(&producer_thd1, nullptr,
                     producer_start, &snack_type_1) != 0) {
    cerr << "pthread_create failed for ";
    cerr << snack_type_1 << " producer" << endl;
  }
  if (pthread_create(&producer_thd2, nullptr,
                     producer_start, &snack_type_2) != 0) {
    cerr << "pthread_create failed for ";
    cerr << snack_type_2 << " producer" << endl;
  }
  if (pthread_create(&consumer_thd, nullptr, consumer_start, nullptr) != 0) {
    cerr << "pthread_create failed for consumer" << endl;
  }

  if (pthread_join(producer_thd1, nullptr) != 0) {
    cerr << "pthread_join failed for ";
    cerr << snack_type_1 << " producer" << endl;
  }
  if (pthread_join(producer_thd2, nullptr) != 0) {
    cerr << "pthread_join failed for ";
    cerr << snack_type_2 << " producer" << endl;
  }
  if (pthread_join(consumer_thd, nullptr) != 0) {
    cerr << "pthread_join failed for consumer" << endl;
  }

  pthread_mutex_destroy(&write_lock);
  return EXIT_SUCCESS;
}


void thread_safe_print(const string& str) {
  pthread_mutex_lock(&write_lock);
  // Only one thread can hold the lock at a time, making it safe to
  // use cout. If we didn't lock before using cout, the order of things
  // put into the stream could be mixed up.
  cout << str << endl;
  pthread_mutex_unlock(&write_lock);
}

// You should NOT modify this method
void producer(const string& snack_type) {
  for (int i = 0; i < kNumSnacks; i++) {
    queue.Enqueue(snack_type);
    thread_safe_print(snack_type + " ready!");
    int sleep_time = rand_r(&seed) % 500 + 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time));
  }
}

void* producer_start(void* arg_ptr) {
  string* snack_type = reinterpret_cast<string*>(arg_ptr);
  producer(*snack_type);
  pthread_exit(nullptr);
  return nullptr;
}

// You should NOT modify this method
void consumer() {
  for (int i = 0; i < 2 * kNumSnacks; i++) {
    bool successful = false;
    string snack_type;
    while (!successful) {
      while (queue.IsEmpty()) {
        // Sleep for a bit and then check again
        int sleep_time = rand_r(&seed) % 800 + 1;
        std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time));
      }
      successful = queue.Dequeue(&snack_type);
    }
    thread_safe_print(snack_type + " eaten!");
  }
}

void* consumer_start(void* arg_ptr) {
  consumer();
  pthread_exit(nullptr);
  return nullptr;
}