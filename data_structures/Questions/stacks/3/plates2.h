/*
    Problem 3.3: Stack of Plates

    Stack of Stacks!!!!!

*/

#include <iostream>
#include "stack.h"

template <typename T, size_t Capacity>
class SetOfStacks
{
    private:
        Stack<Stack<T>> stacks; // Stack of Stack
    public:
        
        void push(T &value)
        {
            std::cout << "Using Push() from plates.h " << std::endl;

            if (stacks.isEmpty() || stacks.peek().size() >= Capacity)
                {
                    std::cout << "Adding a new Stack!!! " << std::endl;
                    
                  stacks.push(Stack<T>()); // start new stack

                }
            stacks.peek().push(value); // else stack isn't empty, push value  onto the stack!!!
        }

       T peek()
        {   std::cout << "using peek() from plates.h" << std::endl;
            return stacks.peek().peek();
        }

        T pop()
        {
            std::cout << "Using pop() from plates.h" << std::endl;
            T value = stacks.peek().pop();
            if (stacks.peek().isEmpty())
            {
                 stacks.pop();
            }
            return value;
        }

        // Number of limited stacks
        size_t size() const
        {
            std::cout << "Using size() from plates.h" << std::endl;
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




