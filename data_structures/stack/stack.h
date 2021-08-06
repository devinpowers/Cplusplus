
#ifndef STACK_h
#define STACK_h

// Define the default capacity of the stack
#define SIZE 10
 
class stack
{
    private:
    int *arr;                       
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);         // Constructor
    ~stack();                       // Destructor
 
    void push(int);    // Push onto the Stack
    int pop();         // Pop value from Stack
    int peek();        // See the top value on the Stack
    int size();        // Size of the Stack
    bool isEmpty();    // Check Stack is empty
    bool isFull();     // Check is Stack is full
};

#endif


