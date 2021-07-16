
#include<iostream>
using std::cout;
using std::endl;
 
#include "q.h"
 
// Constructor to initialize a queue
queue::queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 
// Destructor to free memory allocated to the queue
queue::~queue() {
    delete[] arr;
}
 
// Utility function to dequeue the front element
void queue::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << arr[front] << endl;
 
    front = (front + 1) % capacity;
    count--;
}
 
// Utility function to add an item to the queue
void queue::enqueue(int item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
// Utility function to return the front element of the queue
int queue::peek()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
// Utility function to return the size of the queue
int queue::size() {
    return count;
}
 
// Utility function to check if the queue is empty or not
bool queue::isEmpty() {
    return (size() == 0);
}
 
// Utility function to check if the queue is full or not
bool queue::isFull() {
    return (size() == capacity);
}
 
