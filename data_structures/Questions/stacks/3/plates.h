/*
    Problem 3.3: Stack of Plates

    Stack of Stacks!!!!!

    Build off of the stack.h structure

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
            // Check if a new stack is needed, add value to stack
            if (stacks.isEmpty() || stacks.peek().size() >= Capacity)  
                {
                  stacks.push(Stack<T>()); // start new stack AKA add our stack of stacks
                }
            stacks.peek().push(value); // else stack isn't empty, push value  onto the current stack!!!
        }

    
       T& peek()
        {   
            return stacks.peek().peek();
        }
        
        

        T pop()
        {
            T value = stacks.peek().pop(); 

            std::cout << "Value 'popped': " << value << std::endl;

            if (stacks.peek().isEmpty())
            {
                std::cout << "STACK SIZE: " << stacks.size() << std::endl;
                 stacks.pop(); // pop off "plate" from set of stacks
            }
            return value;
        }

        // Number of limited stacks
        size_t size() const
        {
            // Number of plates in our SetOfPlates
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


/*
& means you return a reference. Otherwise it will return a copy

We also have function chaining!

For this problem we have multiple plates (multiple objects)
*/

