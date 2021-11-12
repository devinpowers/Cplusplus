
#include "queue.h"
#include<iostream>

int main(){

    Queue<int> q;

    // Push a bunch of values onto our Queue
    q.enqueue(420);
    q.enqueue(699); 
    q.enqueue(9);
    q.enqueue(19);
    q.enqueue(10);
    q.enqueue(32);
    q.enqueue(69);
    q.enqueue(100);

    // Peek Value

    std::cout << q.peek() << std::endl;


    // Dequeue !!
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;






}