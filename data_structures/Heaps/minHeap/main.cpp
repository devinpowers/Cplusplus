
#include <iostream>
using std::endl;
using std::cout;

#include "minHeap.h"

int main(){
 
    // Number of elements for our minHeap
    int N = 10;

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



