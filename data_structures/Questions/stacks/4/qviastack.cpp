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
                to.push(from.pop());
        }
        Stack<T> newValues;
        Stack<T> reversed;

    public:
        void add( T value)              // First you add elements to newValues stack 
        {
            newValues.push(value);
        }

        T peek()
        {   // peek to see whats first to be removed from the Queue
            if (reversed.isEmpty())
            {
                
                move(newValues, reversed);
            }
            return reversed.peek();
        }

        T remove()
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
        queue.add(i);
        std::cout << "Queued value " << i << std::endl;
    }

    // LEts peek????

    std::cout << "Lets Peek(): " << queue.peek() << std::endl;

    // Lets remove first value off of the Queue
    queue.remove(); // remove 0
    queue.remove(); // remove 1
    queue.remove(); // remove 2


    std::cout << "Lets Peek() Again: " << queue.peek() << std::endl;

    // lets peek again!!!

    for (int i = 0; i < 5; ++i)
        std::cout << "Removed value " << queue.remove() << std::endl;



    std::cout <<  std::endl;


    for (int i = 10; i < 15; ++i)
    {
        queue.add(i);
        std::cout << "Queued value " << i << std::endl;
    }
    

    while (!queue.isEmpty())
        std::cout << "Removed value " << queue.remove() << std::endl;

    std::cout << "HELOO WORLD " << std::endl;
}


