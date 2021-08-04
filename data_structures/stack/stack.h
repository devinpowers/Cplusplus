
#ifndef STACK_h
#define STACK_h
#include <iostream>
#include <cstdlib>
using namespace std;
 
// Define the default capacity of the stack
#define SIZE 10
 
// A class to represent a stack
class stack
{
    int *arr;
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);         // constructor
    ~stack();                       // destructor
 
    void push(int);
    int pop();
    int peek();
 
    int size();
    bool isEmpty();
    bool isFull();
};

#endif


