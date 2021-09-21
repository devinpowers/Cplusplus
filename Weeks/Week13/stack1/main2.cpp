#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<string>
using std::string;
#include<stdexcept>
using std::underflow_error;

#include "19.1-stack.h"

// Calls Copy Constructor to pass the Stack, then exercise the copy

void fn1(Stack s){

    // is the copy good?
    cout << "fn1 copied stack: " << s << endl;

    while (!s.empty())
    {
        s.pop();
    }

    for (int i = 0; i < 10; i++ )
    {
        s.push(static_cast<char>('z'-i));
    }
    cout << "Updated fn1 Stack: " << s << endl;
}

int main()

{

    // Practice with Basic Stack

    Stack stk = {'a','b','c','d','e'};

    cout << stk << endl;

    // Basic Stack Methods/Functions

    cout << "Top of the Stack: " << stk.top() << endl;

    stk.pop(); // Removes top value from the Stack

    stk.push('Z'); // Pushes another value onto the Stack

    cout << stk << endl;

    while (! stk.empty())
    {
        stk.pop();

    }

    cout << "After popping everything off the stack " << endl;
    cout << stk << endl;

    stk.push('D');
    stk.push('E');
    stk.push('V');
    stk.push('I');
    stk.push('N');
    
    cout << "After pushing items onto the stack: " << endl;

    cout << stk << endl;

    // Clear the stack

    stk.clear();

    cout << stk << endl;


    // Reverse a String

    string user_string = "", reverse_string = "";

    cout << "Input a string to reverse: ";
    getline(cin, user_string); // get line and put it into user_string

    Stack stk2;

    for (auto ch : user_string)
    {
        stk2.push(ch);
    } 

    cout << stk2 << endl;

    while (!stk2.empty())
    {
        stk2.pop();
    }


    cout << "Original String was: " << user_string << endl;
    cout << "Reversed String was: " << reverse_string << endl;


}