
#ifndef STACK_H
#define STACK_H

#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<string>
using std::string;


class Stack {
    private:
    
        int top;
        int size_ = 10; // Default
        int * a = new int[size_];
    
    public:
    
        Stack() { top = -1; }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
        void clear();
};

#endif


