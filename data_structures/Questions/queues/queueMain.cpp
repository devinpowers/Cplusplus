#include "queue.h"
#include <iostream>


int main(){

    // practice

  MyQueue<int> queue;
    for (int i = 0; i < 10; ++i)
    {
        queue.add(i);
        std::cout << "Queued value " << i << std::endl;
    }
}