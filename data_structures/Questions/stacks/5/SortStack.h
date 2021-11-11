/*
    Program that sorts a "Stack"
    Question 3.5
*/

#include <iostream>
#include "stack.h"

template <typename T>
class SortedStack
{
    private:
        
        Stack<T> stack;
        bool sorted;  // True for Sorted, False for unsorted

        void sort()
        {
            // Sort function that you call to sort after ..
            if (sorted)
            {
                return;
            }

            Stack<T> helper; // Helper Stack !!!!!!!!!!!!!!!!!!

            while (!stack.isEmpty())
            {   
                T value = stack.pop();
    
                // Move greater than 'value' elements from 'helper' to 'stack'

                while (!helper.isEmpty() && value < helper.peek())
                {
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
                
            sorted = true; // Now our Stack is sorted!!!
        }


    public:

        // Methods that we can perform on our SortedStack Object!!

        SortedStack() : sorted(false){}  // Default Constructor (Set sorted to False)

        void push(T &value)
        {
            stack.push(value);
            sorted = false;
        }
        
        T& peek()
        {
            sort();
            return stack.peek();
        }
        
        T pop()
        {
            sort();
            return stack.pop();
        }

        bool isEmpty() const
        {
            return stack.isEmpty(); // Return True or False
        }

};



