
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

      // check size of the Stack

    std::cout << "Check the current Size of the Stack: " << stack1.size() << std::endl;
    // Check Peek
    std::cout << "Peek : " << stack1.peek() << std::endl;

    // check pop()

    while(stack1.isEmpty() != true){
        // pop all elements from the stack
        std::cout << stack1.pop() << std::endl;
    }

    // check size of the Stack

    std::cout << "Check the  Size of the Stack after we popped a few off: " << stack1.size() << std::endl;

    // Check if empty
    std::cout << "Is the Stack Empty?: " << std::boolalpha << stack1.isEmpty() << std::endl; 


}