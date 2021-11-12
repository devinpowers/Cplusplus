/*
    Problem 3.3: Stack of Plates

    Stack of Stacks!!!!!

    Build off of the stack.h structure

    templated size_t Capacity
*/

#include <iostream>
#include "stack.h"

template <typename T, size_t Capacity>
class SetOfStacks
{
    private:
        Stack<Stack<T>> stacks;  // Stack of Stacks

    public:
        
        void push(T &value)
        {   
            if (stacks.isEmpty() || stacks.peek().size() >= Capacity)  
                {
                  stacks.push(Stack<T>()); 
                }
            stacks.peek().push(value); 
        }
    
       T& peek()
        {   
            return stacks.peek().peek();
        }
        
        T pop()
        {
            T value = stacks.peek().pop(); 

            if (stacks.peek().isEmpty())
            {
                 stacks.pop(); 
            }
            return value;
        }

        size_t size() const
        {
            return stacks.size();
        }
};

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

