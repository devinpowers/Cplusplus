
#include<iostream>
using std::cout;
using std::endl;

#include "q.h"

int main()
{
    // create a queue of capacity 5
    queue q(10);
 
    // Insert Some Elements
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);h
    q.enqueue(9);
 
    cout << "The front element is " << q.peek() << endl;
    // Remove the Element in Front of the Queue
    q.dequeue();
    // Insert another element in the Rear of the Queue
    q.enqueue(4);
 
    cout << "The queue size is " << q.size() << endl;
    
    // Remove More Elements in the Queue
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty())
    {e
        cout << "The queue is empty " << endl;
    }
    else 
    {
        cout << "The queue is not empty" << endl;
    }

}

