
/*
        Using the stack.h data structure from the Crack the Code Book!
*/
#include <iostream>
#include "stack.h"



int main(){

    // Lets use this stack for an example
    Stack<int> stack1;

    for (int i = 0; i <20; i++ ){

        stack1.push(i);
    }
    stack1.push(0);
    stack1.push(23);
    stack1.push(69);

      // check size of the Stack

    std::cout << "Check the current Size of the Stack: " << stack1.size() << std::endl;
    // Check Peek
    std::cout << "Peek : " << stack1.peek() << std::endl;

    // check pop() aka pop all items off the stack!

   
    while(stack1.isEmpty() != true){
        // pop all elements from the stack
        std::cout << stack1.pop() << std::endl;
    }
 
    

    // check size of the Stack

    std::cout << "Check the  Size of the Stack after we popped a few off: " << stack1.size() << std::endl;

    // Check if empty
    std::cout << "Is the Stack Empty?: " << std::boolalpha << stack1.isEmpty() << std::endl; 

    //print
    // std::cout << "PRINT: " << std::endl;
   // stack1.print();
    std::cout << std::endl;

    // Another stack

    Stack<char> stack2;
    stack2.push('C');
    stack2.push('e');
    stack2.push('r');
    stack2.push('A');
    stack2.push('u');
    stack2.push('e');

    std::cout << "Print stack2: " << std::endl;

    std::cout << "Pop first element off stack2 " << std::endl;

    stack2.pop();
    
    char ch =stack2.peek();
    std::cout << std::endl;
    std::cout << "Char:" << ch << std::endl;

   


    std::cout << "SIZE: " << stack2.size() << std::endl;
    std::cout << std::endl;
    std::cout << "SIZE: " << stack2.size() << std::endl;

while(stack2.isEmpty() != true){
        // pop all elements from the stack
        std::cout << stack2.pop() << std::endl;
    }
 
    
}