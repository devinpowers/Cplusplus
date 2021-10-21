#include <iostream>
#include "SortStack.h"



int main()
{

    SortedStack<int> stack;
    for (auto v : {6,1,5,4,10,9,-1,69,420,0,-10,92,43})
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