

#include<iostream>
using std::cout;
using std::endl;
 
using std::boolalpha;

#include "stack.h"


int main(){

    // create a new stack object

    stack<int> s1;
    s1.push(3);
    s1.push(6);
    s1.push(9);
    s1.push(10);
    s1.push(23);

    //other operations on the stack

    // pop
    s1.pop();
    
    // Peek() retrun 
    cout << "Peek (retun the top of the stack): " << s1.peek() << endl;

    // return size of the stacl
    cout << "Size of the Stack is: "  << s1.size() << endl;

    // Check if the stack is full

    cout << "Is the Stack Empty? " << boolalpha << s1.isFull() << endl;

    while(s1.isEmpty() != true){
        // pop until stack is empty
        s1.pop();
    }
    cout << "CHeck again if the stack is empty." << endl;
    cout << "Is the Stack Empty? " << boolalpha << s1.isEmpty() << endl;

    // Stack number 2 with char as characters to put in

    stack<char> stack2;

    stack2.push('A');
    stack2.push('B');
    stack2.push('C');
    stack2.push('S');
    stack2.push('E');
    stack2.push('L');

    // 
    while(stack2.isEmpty() != true){
        // pop until stack is empty
        stack2.pop();
    }

        cout << "Is the Stack Empty? " << boolalpha << stack2.isEmpty() << endl;

    
}