
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
    rear = -1;  // 
    count = 0; // Number of elements in our Queue
}
 
// Destructor to free memory allocated to the queue
queue::~queue() {
    delete[] arr;
}
 
 // Utility function to check if the queue is empty or not
bool queue::isEmpty() {
    return (size() == 0);
}

// Utility function to dequeue the front element
void queue::dequeue()
{
    // check for queue underflow (if the Queue is Empty)
    if (isEmpty())
    {
        cout << "Underflow Program Terminated " << endl;
    }
    // Else we're going to remove the item from the front of the Queue
    cout << "Removing " << arr[front] <<  " From Queue" << endl;
    // Adjust the front of the Queue now
    front = (front + 1);

    count--; // minus count 
}
 
// Utility function to add an item to the queue
void queue::enqueue(int item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow Program Terminated " << endl;
    }
 
    cout << "Inserting " << item <<  " into the Queue " << endl;
 
    rear = (rear + 1); //  Adjusting the Rear
    arr[rear] = item; // Insert element into rear of the Queue
    count++;
}
 
// Utility function to return the front element of the queue
int queue::peek()
{
    if (isEmpty())
    {   // If the Queue is Empty
        cout << "Underflow Program Terminated" << endl;
    }
    return arr[front];
}
 
// Utility function to return the size of the queue
int queue::size() {
    return count;
}
 
// Utility function to check if the queue is full or not
bool queue::isFull() {
    return (size() == capacity);
}
 
