// Queue via Stacks: Implement a MyQueue class which implements a queue using two stacks.

#include <iostream>
#include "stack.h"

template <typename T>
class Queue
{
    private:
    // Move Function will adjust our stack
        void move(Stack<T> &from, Stack<T> &to)
        {
            while (!from.isEmpty())
            {
                to.push(from.pop());
            }
        }
         /* static void move(Stack<T> &from, Stack<T> &to)
        {
            while (!from.isEmpty())
            {
                to.push(from.pop());
            }
        }
        */
       
        Stack<T> newValues; 
        Stack<T> reversed;     

    public:

        void enqueue( T value)              
        {
            newValues.push(value);
        }

        T peek()
        {   
            if (reversed.isEmpty())
            {
                move(newValues, reversed);
            }
            return reversed.peek();
        }

        T dequeue()
        {
            if (reversed.isEmpty()){
                move(newValues, reversed);
            }
            return reversed.pop();
        }

        bool isEmpty()
        {
            return newValues.isEmpty() && reversed.isEmpty();
        }
};

