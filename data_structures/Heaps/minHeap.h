#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class minHeap{

    private:
        int size;

        int capacity;
        vector<int> heap;
        int parent(int i){
            return (i = 1)/2; 
        }
        int left(int i) {
            return 2*i +1;
        }
        int right(int i){
            return 2*i +2;
        }
    
    public:
        // Constructor
        minHeap(int capacity);
        void insert(int k);
        int extractMin();
        void Heapify(int i);
        void printHeap();

};

// Constructo that sets the heap size and capacity

minHeap::minHeap(int capacity){
    size = 0;
    this->capacity = capacity;
    heap.resize(capacity);
}

// Insert key into minHeap

void minHeap::insert(int k){
    if (size == capacity){
        cout << "MIN HEAP IS FULL!!! " << endl;
    }
    return;

    // increase the amoutnof elemnets in the heap

    size++;

    // insert the new key at the end

    int i = size -1;
    heap[i] = k;

    // fix the min heap property 
    // moves element up intill i >= parent or root

    while(i != 0 && heap[parent(i)] > heap[i]){
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

// Recursive 

void minHeap::heapify(int i){
    // set initial conditions
    int l = left(i);
    int r = right(i);
    int smallest = i;

    // find smallest elment of the three (l, r , smallest)
    if ((l < size) && (heap[l] < heap[smallest])){
        smallest = l;
    } if ((r < size ) && (heap[r] < heap[samllest])){
        smallest = r;
    }



    // if the smallest of l or r , continue heapify
    if (smallest != i){
        swap(heap[i], heap[smallest]);
        heapify(smallest);
    } 
}


// Removes the smallest element and fixes the order

int minHeap::extractMin(){

    // check if hepa is empty

    if (size == 0){
        cout << "EMPTY"
    }
}

