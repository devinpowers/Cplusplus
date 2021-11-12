
/*
    Main Sort Program that sorts shit
*/


#include <iostream>
#include "SortStack.h"

int main()
{
    SortedStack<int> stack;
    for (auto v : {4,-3,0,19,24,10})
    {
        stack.push(v);
        std::cout << "Pushed value: " << v << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Sorted Stack after sorting! " << std::endl;
    std::cout << std::endl;
    while (!stack.isEmpty())
    {
        auto v = stack.pop();
        std::cout << "Popped value: " << v << std::endl;
    }
}


