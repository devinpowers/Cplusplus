

#include <vector>
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::swap;
using std::vector;


class maxHeap{
    private:
        int size;
        int capacity;
        vector<int> heap;
        int parent(int i){return (i - 1) / 2;}
        int left(int i){return 2 * i + 1;}
        int right(int i){return 2 * i + 2;}

    public:
        maxHeap(int capacity);
        void insert(int k);
        int extractMax();
        void heapify(int i);
        void printHeap();
    };

maxHeap::maxHeap(int capacity){
    size = 0;
    this->capacity = capacity;
    heap.resize(capacity);
}

void maxHeap::insert(int val){

    if(size == capacity){
        cout << "Sorry the Max Heap is Full!" << endl;
        return;
    }
    size++;

    int i = size - 1;
    heap[i] = val; 

    while(i != 0 && heap[parent(i)] < heap[i])
    {
        swap(heap[i], heap[parent(i)]);
        i = parent(i); 
    }
}

void maxHeap::heapify(int i){
    
    int l = left(i);
    int r = right(i);
    int largest = i;

    if((l < size) && (heap[l] > heap[largest])){
        largest = l;

    }if((r < size) && (heap[r] > heap[largest])){
        largest = r;
    }

    if(largest != i){
        swap(heap[i], heap[largest]);
        heapify(largest);
    }
}

int maxHeap::extractMax(){
   
    if(size == 0){
        cout << "Sorry the heap is Empty!" << endl;
        return -1;

    }else if(size == 1){
        size--;
        return heap[0];
    }
    else{

        int root = heap[0];
        heap[0] = heap[size - 1];
        size--;
        heapify(0); 
        heap[size] = 0; 
        return root;
    }
}


void maxHeap::printHeap(){

    for (int i = 0; i < heap.size(); i++ ){

        cout << heap[i] << " ";
    }
    cout << endl;
}


