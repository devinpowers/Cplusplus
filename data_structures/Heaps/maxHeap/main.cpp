#include "maxHeap.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    // Number of elements for our maxHeap
    int N = 15;

    // Declare a heap with space for 10 elements
    maxHeap heap(N);

    cout << "Inserting 30 into our Max Heap " << endl;
    heap.insert(30);
    heap.printHeap();
    cout << endl;

     cout << "Inserting 20 into our Max Heap " << endl;
    heap.insert(20);
    heap.printHeap();
    cout << endl;

    cout << "Inserting 50 into our Max Heap " << endl;
    heap.insert(50);
    heap.printHeap();
    cout << endl;

    cout << "Inserting 15 into our Max Heap " << endl;
    heap.insert(15);
    heap.printHeap();
    cout << endl;

    cout << "Inserting 10 into our Max Heap " << endl;
    heap.insert(10);
    heap.printHeap();
    cout << endl;

    cout << "Inserting 8 into our Max Heap " << endl;
    heap.insert(8);
    heap.printHeap();
    cout << endl;

    cout << "Inserting 16 into our Max Heap " << endl;
    heap.insert(16);
    heap.printHeap();
    cout << endl;


    // Insert 60 into our Max Heap

    cout << "Inserting 60 into our Max Heap " << endl;
    heap.insert(60);
    heap.printHeap();
    cout << endl;
    





}
