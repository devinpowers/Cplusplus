#include <iostream>

#include "minHeap.h"
using std::endl;
using std::cout;

int main(){

    /*
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
    */
   // Number of elements for our minHeap
    int N = 15;

    // Declare a heap with space for 10 elements
    minHeap heap(N);

    cout << "inserting 20 into minHeap " << endl;
    heap.insert(20);
    heap.printHeap();
    cout << endl;
        cout << "inserting 30 into minHeap " << endl;

    heap.insert(30);
    heap.printHeap();   
    cout << endl;

    cout << "inserting 10 into minHeap " << endl;
    heap.insert(10);
    heap.printHeap();   
    cout << endl;

    cout << "inserting 35 into minHeap " << endl;

    heap.insert(35);
    heap.printHeap();
    cout << endl;

    cout << "inserting 40 into minHeap " << endl;

    heap.insert(40);
    heap.printHeap();
    cout << endl;

    cout << "inserting 32 into minHeap " << endl;

    heap.insert(32);
    heap.printHeap(); 
    cout << endl;

    cout << "inserting 8 into minHeap " << endl;

    heap.insert(8);
    heap.printHeap();
    cout << endl;

    cout << "Extract min: " << heap.extractMin() << endl;
    heap.printHeap();
    cout << endl;


}