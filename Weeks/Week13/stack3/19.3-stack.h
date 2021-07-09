
#ifndef STACK_H
#define STACK_H

#include<iostream>
using std::ostream;
#include<initializer_list>
using std::initializer_list;

class Stack{
private:
    // Attributes
    char *ary_ = nullptr;  // This will be an array
    int sz_ = 0;            // Size of the Array
    int top_ = -1; 

public:
    // General Constructors to Initialize the Stack
    Stack()=default; // Default constructor, when you create an object without initizing it 
    
    Stack(size_t sz); // Takes in the "Size" of the String which will be converted into an Array -> string.size()
    Stack(initializer_list<char>); // Takes in {'A','B','C'} and Creates/Initializes the stack
    
    Stack(const Stack &);   // copy Constructor
    ~Stack();               // destructor (easy)
    Stack& operator=(const Stack &); // Overloaded =
    
    // Memebers/Operations on Stack
    char top();
    void pop();
    void push(char);
    bool empty();
    bool full();
    void clear();

    // Operator Overloader
    friend ostream& operator<< (ostream&, const Stack &);
};

ostream& operator<< (ostream&, const Stack&);
#endif


