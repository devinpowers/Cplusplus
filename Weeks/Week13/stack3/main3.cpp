#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<string>
using std::string;
#include<stdexcept>
using std::overflow_error; using std::underflow_error;

#include "19.3-stack.h"



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

    Stack stk1 = {'a','b','c','d'}; 

    cout << stk1 << endl;

    // Lets test out some of the methods

    cout << "Top: " << stk1.top() << endl;

    stk1.top();
    // Can't push anymore values onto the stack because it's full
    //stk1.push('Z');

    cout << stk1 << endl;

    stk1.clear();

    cout << stk1 << endl;

    // Reverse a String

    string user_string = "", reverse_string = "";

    cout << "Input a String to reverse: ";

    getline(cin, user_string);

    // This is the size_t datatype constructor thing
    Stack rev_stk(user_string.size()); // Pass in the size of the String 

    cout << "User_String Size: " << user_string.size() << endl;

    for (auto ch : user_string )
    {
        // Push individual characters onto the stack
        rev_stk.push(ch);
    }

    // print out Rev_Stack

    cout << rev_stk << endl;

    Stack stack69(20); // Using the size_t datatype constructor

    stack69.push('A');

    cout << stack69 << endl;

    //
    Stack stk2 = rev_stk;

    cout << "STACK TWO: " << endl;
    cout << stk2 << endl;

    // stk1 is already in existence

    cout << "The '=' Operator Overload: " << endl;

    stk1 = rev_stk;

    cout << stk1 << endl;

    // Using the top function thing
    cout << "Testing the Top Function: (THIS WILL CALL THE COPY CONSTRUCTOR!!!!) " << endl;
    cout << "______________________________________________________________________" << endl;

    fn1(stk1); // Calls the Copy Constructor above

    cout << "STK1 After: " << endl; // It doesn't change the Stack

    cout << stk1 << endl;

}