#include "deque.h"

int main()
{
    SetOfStacks<int, 2> stack;
    for (int i = 0; i < 13; ++i)
    {
        stack.push(i);
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
    }

    std::cout << std::endl;
    stack.popAt(4);
    stack.popAt(4);

    while (stack.size() != 0)
    {
        size_t stackNo = stack.size();
        std::cout << stack.pop() << " is popped from the stack " << stackNo << std::endl;
    }

    std::cout << std::endl;

    SetOfStacks<int, 1> stack1;
    for (int i = 0; i < 13; ++i)
    {
        stack1.push(i);
        std::cout << i << " is pushed into the stack " << stack1.size() << std::endl;
    }

    std::cout << std::endl;
    stack1.popAt(4);
    stack1.popAt(4);

    while (stack1.size() != 0)
    {
        size_t stackNo = stack1.size();
        std::cout << stack1.pop() << " is popped from the stack " << stackNo << std::endl;
    }
}

