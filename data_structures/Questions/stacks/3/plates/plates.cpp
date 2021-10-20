
#include <iostream>
#include "stack.h"

template <typename T, size_t Capacity>
class SetOfStacks
{
    private:
        Stack<Stack<T>> stacks;

    public:
        
        void push(T &value)
        {
            if (stacks.isEmpty() || stacks.peek().size() >= Capacity)
                {
                  stacks.push(Stack<T>()); // start new stack
                }
            stacks.peek().push(value);
        }

        T peek()
        {   return stacks.peek().peek(); }

        T pop()
        {
            T value = stacks.peek().pop();
            if (stacks.peek().isEmpty())
            {
                 stacks.pop();
            }
            std::cout << "Value: " << value << std::endl;
            return value;
        }

        // Number of limited stacks
        size_t size() const
        {
            return stacks.size();
        }
};

// If Capacity is 1 we do not need stack of stacks.
template <typename T>
class SetOfStacks<T, 1> : public Stack<T>{};


// Forbid Capacity 0
template <typename T>
class SetOfStacks<T, 0> {
    public:
        SetOfStacks() = delete;
};




int main()
{
    SetOfStacks<int, 2> stack;

    for (int i = 0; i < 11; ++i)
    {
        stack.push(i);
        std::cout << i << " is pushed into the stack " << stack.size() << std::endl;
    }
 
    // prac

    // std::cout << "Stack: " << stack.pop() << std::endl;

    while (stack.size() != 0)
    {
      //  std::cout <<  "HELLO WORLD" << std::endl;

        size_t stackNo = stack.size();
       std::cout << stack.pop() << " from: " << stackNo <<std::endl;
    }


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

    return 0;
    */
}