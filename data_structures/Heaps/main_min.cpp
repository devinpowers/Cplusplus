#include <iostream>

#include "minHeap.h"


int main(){

    //minHeap
    minHeap mHeap(7);

    mHeap.insert(30);
    mHeap.insert(32);
    mHeap.insert(10); // 10 is the "min"
    mHeap.insert(28);
    //mHeap.insert(20);
    //mHeap.insert(35);
    
    std::cout << std::endl;
    std::cout << "Print the Binary Min Heap before: ";
    mHeap.printHeap();
   //  mHeap.insert(8);
    std::cout << std::endl;

   

 



}