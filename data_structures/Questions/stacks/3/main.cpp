
#include <iostream>
#include "plates.h"

int main()
{
    SetOfStacks<int, 2> stack;

    for (int i = 0; i < 6; ++i)
    {
        stack.push(i);
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
    }
 
    std::cout << "HELLO WORLD  " << std::endl;
    // prac

    // std::cout << "Stack: " << stack.pop() << std::endl;

    /*
    while (stack.size() != 0)
    {
        size_t stackNo = stack.size();
       std::cout << stack.pop() << " from: " << stackNo <<std::endl;
    }
    */

    
    



    /*
    SetOfStacks<int, 1> stack1;

    for (int i = 0; i < 11; ++i)
    {
        stack1.push(i);
        std::cout << i << " is pushed into the stack " << stack1.size() << std::endl;
    }

    std::cout << std::endl;

    while (!stack1.isEmpty())
    {
        size_t stackNo = stack1.size();
        std::cout << stack1.pop() << " is popped from the stack " << stackNo << std::endl;
    }
    */

    


}