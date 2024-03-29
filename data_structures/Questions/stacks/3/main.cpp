
#include <iostream>
#include "plates.h"

int main()
{
    SetOfStacks<int, 5> stack;

    std::cout << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        stack.push(i);
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
    }

    while (stack.size() != 0)
    {    
        // Refering to the stackNo as the Size of number plates so we're looping thru plates in our stackofplates
         size_t stackNo = stack.size();
         std::cout << stack.pop() << " from: " << stackNo <<std::endl; 
    }
    
    SetOfStacks<int, 1> stack1;

    for (int i = 0; i < 11; ++i)
    {
        stack1.push(i);
        std::cout << i << " is pushed into the stack " << stack1.size() << std::endl;
    }

    while (!stack1.isEmpty())
    {
        size_t stackNo = stack1.size();
        std::cout << stack1.pop() << " is popped from the stack " << stackNo << std::endl;
    }

}



