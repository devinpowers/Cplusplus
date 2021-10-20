// Sort Stack: Write a program to sort a stack such that the smallest items are on the top. You can use
// an additonal temporary stack, but you may not copy the elements into any other data struture
// (such as an array). The stack support the following operations: pop, peek, and isEmpty.

#include <iostream>
#include "stack.h"

template <typename T>
class SortedStack
{
    private:

        Stack<T> stack;     // Extra Stack 
        bool sorted;

        void sort()
        {
            // Sort the Stack
            if (sorted) // if True
            {
                return;
            }

            Stack<T> helper;
            while (!stack.isEmpty())
            {
                T value = stack.pop();

                // Move greater than 'value' elements from 'helper' to 'stack'
                while (!helper.isEmpty() && value < helper.peek()){
                    stack.push(helper.pop());
                }
                // Place 'value' above smaller element into 'helper'
                helper.push(value);
            }

            // Copy from 'helper' into 'stack' in reversed order
            while (!helper.isEmpty())
            {
                stack.push(helper.pop());
            }
               
            sorted = true;
        }

    

    public:

        // Function to perform on stack

        SortedStack() : sorted(false){}

        template <typename U>
        void push(U &&value)
        {
            stack.push(value);
            sorted = false; // Once you push an item on the stack, it becomes unsorted so we must update it!!!!
        }

        T &peek()
        {
            sort(); // Call sort
            return stack.peek();
        }

        T pop()
        {
            sort(); // Call sort
            return stack.pop();
        }

        bool isEmpty() const
        {
            return stack.isEmpty();
        }
};

int main()
{
    SortedStack<int> stack;
    for (auto v : {5, 10, 4, 9, 3, 3, 8, 1, 2, 2, 7, 6})
    {
        stack.push(v);
        std::cout << "Pushed value: " << v << std::endl;
    }

    std::cout << std::endl; 

    std::cout << "Now everything in the stack is sorted!! " << std::endl;

    while (!stack.isEmpty())
    {
        auto v = stack.pop();
        std::cout << "Popped value: " << v << std::endl;
    }

    SortedStack<char> stack2;

    for (auto v: {'e','r','a','d','c','v','b','n','i','s','w','e','l','p','z','s','q','t','s'}){
        stack2.push(v);
        std::cout << "Pushed value" << v << std::endl;

    }
    std::cout << std::endl; 

    std::cout << "Now everything in the stack is sorted!! " << std::endl;

    while (!stack2.isEmpty())
    {
        auto v = stack2.pop();
        std::cout << "Popped value: " << v << std::endl;
    }

}
