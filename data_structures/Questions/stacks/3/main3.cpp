#include <iostream>
#include "plates2.h"

int main()
{
    SetOfStacks<int, 2> stack;

    for (int i = 0; i < 3; ++i)
    {
        stack.push(i);
        std::cout << "----------------------------------------------- " << std::endl;
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
        std::cout << "----------------------------------------------- " << std::endl;
    }

    // Peek

    std::cout << "stackk.peek()" << stack.peek() << std::endl;
    std::cout << "************************************************** " << std::endl;
}

