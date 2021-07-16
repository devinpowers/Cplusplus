
#include<iostream>
using std::cout;
using std::endl;
 
// Define the default capacity of a queue
#define SIZE 10
 
// A class to store a queue
class queue
{
    int *arr;       // array to store queue elements
    int capacity;   // maximum capacity of the queue
    int front;      // front points to the front element in the queue (if any)
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue
     
public:
    queue(int size = SIZE);     // constructor
    ~queue();                   // destructor
 
    void dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

