
#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<string>
using std::string;
#include<stdexcept>
using std::overflow_error; using std::underflow_error;

#include "stack.h"

int main()
{
    // Using initializer_list<char> 
    Stack stk1 = {'a','b','c','d'}; 

    // Return the Top of the Stack

    cout << stk1.top() << endl;

    // Pop the first Value from the stack
    cout << "Pop that Pussy" << endl;
    stk1.pop();
    
    // Print to see it removed
    cout << stk1 << endl;
    
    // Push Character onto the stack
    stk1.push('s');
    cout << stk1 << endl;

    // Try to Push another Char onto the Full stack
    // stk1.push('d');

    cout << stk1.full() <<endl; // Will Return 0 for False and 1 for True

    // empty() Checks if the Stack is empty, will Return 0 for False and 1 for True
    cout << stk1.empty() << endl;

    // Clear the Stack

    stk1.clear();

    cout << stk1 << endl;

    cout << stk1.empty() << endl;
}



