// Queue via Stacks: Implement a MyQueue class which implements a queue using two stacks.

#include <iostream>
#include "stack.h"

template <typename T>
class MyQueue
{
    private:

        static void move(Stack<T> &from, Stack<T> &to)
        {
            // this function moves values into reversed so we can "pop" them out!!!
            while (!from.isEmpty())
            {
                to.push(from.pop());
            }
                
        }

        Stack<T> newValues; // Add to this Stack
        Stack<T> reversed;      // Stack gets reversed so everything is in correct order

    public:
        // What methods you can use on MyQueue Object!
    
        void enqueue( T value)              
        {
            newValues.push(value);
        }

        T& peek()
        {   // peek to see whats first to be removed from the Queue

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

int main()
{
    MyQueue<int> queue;
    for (int i = 0; i < 10; ++i)
    {
        queue.enqueue(i);
        std::cout << "Queued value: " << i << std::endl;
    }

    std::cout << std::endl;
    // LEts peek????

    std::cout << "Lets Peek(): " << queue.peek() << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Dequeued value of : " << queue.dequeue() << std::endl;
    }
        
    std::cout <<  std::endl;

    
 
}


