
#include<iostream>
using std::cout;
using std::endl;

#include "q.h"

int main()
{
    // create a queue of capacity 5
    queue q(5);
 
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
 
    cout << "The front element is " << q.peek() << endl;
    q.dequeue();
 
    q.enqueue(4);
 
    cout << "The queue size is " << q.size() << endl;
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}