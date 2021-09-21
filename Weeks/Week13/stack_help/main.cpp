#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
 
#include "stack.h"

int main()
{
    Stack s;
    cout << "STARTING  " << endl;
    cout << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    s.push(90);
    cout << s.pop() << " Popped from stack\n" << endl;
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
    cout << endl;
    s.push(2);
    s.push(89);

    // Let's clear the stack
    s.clear();
    cout << "The Stack is Cleared" << endl;
    s.push(69);
    s.push(100);
    s.push(78);

    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
    cout << endl;





}

