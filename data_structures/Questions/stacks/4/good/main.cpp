

#include <iostream>
#include "queue.h"

int main()
{
    MyQueue<int> queue;
    for (int i = 0; i < 10; ++i)
    {
        queue.enqueue(i);
        std::cout << "Queued value: " << i << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Lets Peek(): " << queue.peek() << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Dequeued value of : " << queue.dequeue() << std::endl;
    }
        
    std::cout <<  std::endl;
 
}


