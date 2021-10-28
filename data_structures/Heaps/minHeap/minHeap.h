#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class minHeap{

    private:

        int size; // Size of the minHeap

        int capacity; // Capacity of the minHeap

        vector<int> heap; // Vector the minHeap

        int parent(int i){
            return (i = 1)/2; 
        }
        int left(int i) {
            return 2*i;
        }
        int right(int i){
            return 2*i +1;
        }

        void heapify_down(int i);
        void heapify_up(int i);

    
    public:

        minHeap(int capacity); // Constructor
        void insert(int k);
        int extractMin();
        void Heapify(int i);
        void printHeap();

};

// Constructor that sets the heap size and capacity

minHeap::minHeap(int capacity){
    size = 0;
    this->capacity = capacity; // set capacity 
    heap.resize(capacity);
}

// Insert key into minHeap

void minHeap::insert(int k){
    if (size == capacity){
        cout << "MIN HEAP IS FULL!!! " << endl;
        return;
    }
    

    // increase the amoutnof elemnets in the heap

    size++;

    // insert the new key at the end

    int i = size -1;
    heap[i] = k;
    cout << "i: " << i << endl;
    cout << "k: " << k << endl;

    // fix the min heap property 
    // moves element up intill i >= parent or root

    cout << "heap[parent(i)] = " << heap[parent(i)] << endl;

    while(i != 0 && (heap[parent(i)] > heap[i])){
        cout << "GOTTA SWAP SHIT " << endl;
        cout << "i: " << heap[i]  << endl;
        swap(heap[i], heap[parent(i)]); // Swap if l
        i = parent(i); 
        cout << "i after: " << i << endl;

        // have to recheck this shit

    }

    // call heapify
    Heapify(k);

    
}

// Recursive 


void minHeap::Heapify(int i){

    // Process of converting a binary Tree into a Heap Data Stucture!!! that satisfuies the heap-order property

    // set initial conditions
    std::cout << "Calling Heapify " << std::endl;
    // Take it easy

    int l = left(i);
    int r = right(i);
    int smallest = i;

    // find smallest elment of the three (l, r , smallest)
    if ((l < size) && (heap[l] < heap[smallest])){
        smallest = l;
    } if ((r < size ) && (heap[r] < heap[smallest])){
        smallest = r;
    }

    // if the smallest of l or r , continue heapify
    if (smallest != i){
        swap(heap[i], heap[smallest]);
        Heapify(smallest);
    } 
}





// Removes the smallest element and fixes the order

int minHeap::extractMin(){

    // check if heap is empty

    if (size == 0){
        cout << "EMPTY" << endl;
        return -1;
    }
    // Check if there is only 1 element
    else if (size == 1){
        size--;
        return heap[0];
    }
    //normal extraction
    else{
        // store the root
        int root = heap[0];

        // maintain heap shape and then order
        heap[0] = heap[size - 1];
        size--;
        Heapify(0);

        //return the root;
        return root;
    }



}



void minHeap::printHeap(){


    for (int i = 0; i < heap.size(); i++ ){
        // print 

        cout << heap[i] << " ";
    }
    cout << endl;

    
}

