#include "maxHeap.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    // Number of elements for our maxHeap
    int N = 8;

    // Declare a heap with space for 10 elements
    maxHeap heap(N);



    heap.insert(50);
    heap.insert(30);
     heap.insert(20);
    heap.insert(15);
    heap.insert(10);
    heap.insert(8);

    heap.printHeap();
    cout << endl;

    cout << "Lets insert 25 into our MaxHeap!! " <<endl;
    heap.insert(25);
    heap.printHeap();


    

   cout << endl;
   heap.printHeap2();
    cout << endl;
    cout << "Extracting the Max from the Heap " << endl;
    heap.extractMax();
    cout << endl;
    heap.printHeap();



}
