
#include <iostream>
#include "plates.h"

int main()
{
    SetOfStacks<int, 2> stack;

    for (int i = 0; i < 10; ++i)
    {
        stack.push(i);
        std::cout << "----------------------------------------------- " << std::endl;
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
        std::cout << "----------------------------------------------- " << std::endl;
    }
        std::cout << "Size of Stacks->>>>> " << stack.size() << std::endl;

    
    std::cout << "**************************************** " << std::endl;
    std::cout << "using stack.peek()" << stack.peek() << std::endl;
    std::cout << "**************************************** " << std::endl;

    
     while (stack.size() != 0)
    {
        size_t stackNo = stack.size();
       std::cout << stack.pop() << " from: " << stackNo <<std::endl;
    }


    // peek

    std::cout << "Size of Stacks->>>>> " << stack.size() << std::endl;
   


}