
#include<iostream>
using std::cout;
using std::endl;

#include "stack.h"

// Constructor to initialize the stack
stack::stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;            // index
}
 
// Destructor to free memory allocated to the stack
stack::~stack() {
    delete[] arr;
}

 void stack::push(int x)
{
    if (isFull())
    {
        cout << "Overflow Program Terminated" << endl;
    }
 
    cout << "Inserting " << x << endl;
    // Add value to the Stack
    arr[++top] = x;
}
 
// Utility function to pop a top element from the stack
int stack::pop()
{
    if (isEmpty())
    {
        cout << "Underflow Program Terminated " << endl;
    }
    cout << "Removing " << peek() << endl;

    // decrease stack size by 1 and (optionally) return the popped element
    return arr[top--];
}
 
// Utility function to return the top element of the stack
int stack::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        cout << "Stack is Empty " << endl;
    }
}
 
// Utility function to return the size of the stack
int stack::size() {
    cout << "Called" << endl;
    return top + 1;
}
 
// Utility function to check if the stack is empty or not
bool stack::isEmpty() {
    return top == -1; 
}
 
// Utility function to check if the stack is full or not
bool stack::isFull() {
    return top == capacity - 1;
}



 