/* MinHeap in C++

*/

#include <iostream>
#include <algorithm>
#include <vector>
using std::vector;
using std::endl;
using std::cout;


class minHeap{

    private:

        int size;
        vector<int> heap; // Vector to store elements in
        int capacity;

        // returns parent node
        int parent(int i){
            return (i - 1)/2;
        }
        // returns left child
        int left(int i){
            return 2*i+1;
        }
        // returns right child
        int right(int i){
            return 2*i+2;
        }

    public:

        // constructor
        minHeap(int capacity);
        // insert a key into the min heap
        void insert(int k);
        // extract the min element 
        int extractMin();
        // Recusively heapfiy a sub-tree
        void heapify(int i);
        // print the heap
        void printHeap();

};


// Constructor that sets the heap size and capacity!
minHeap::minHeap(int capacity){
    size = 0;
    this->capacity = capacity;
    heap.resize(capacity);
}

void minHeap::insert(int k){
    // make sure tjere is still space in the heap
    if (size == capacity){
        cout << "MIN HEAP FULL! " << endl;
        return;
    }
    // incrase the amount of elements in the heap
    size++;
    // insert the newkey at the en
    int i = size - 1;
    heap[i] = k;

    //move the element up unitl i>= parent or root
    while(i != 0 && heap[parent(i)] > heap[i]){
        std::swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

// Recursive funciton to maintain structure
void minHeap::heapify(int i){
    // set inital conditions
    int l = left(i);
    int r = right(i);
    int smallest = i;

    // find the smallest element of the thtee 
    if((l < size) && (heap[l] < heap[smallest])){
        smallest = l;
    }
    if ((r< size) && (heap[r] < heap[smallest])) {
        smallest = r;
    }
    // if the smallest of l or r, continue heapify
    if (smallest != i){
        std::swap(heap[i], heap[smallest]);
        heapify(smallest);
    }
}

// rmoves the smallest element and fixes the order

int minHeap::extractMin(){
    // check if the geap is empty
    if (size == 0){
        cout << "empty Heap " << endl;
        return -1;
    }
    // check if there is only 1 element
    else if (size == 1){
        size--;
        return heap[0];
    }
    // Normal Extraction
    else {
        // store the root
        int root = heap[0];

        // maintain heap shape and then ortder
        heap[0] = heap[size -1 ];
        size--;
        heapify(0);
        return root;
    }
}

// Pretty print the heap
void minHeap::printHeap(){

    int power = 0;
    int value = 1;
    for (int i = 0; i < size; i++ ){
        if (i == value){
            cout << endl;
            power += 1;
            value += (1 << power);
        }
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {

    // number of elements for our minHeap
    int N = 15;


    // Declare a heap with space for 10 elements
    minHeap heap(N);

    // Insert N random Numbers
    for(int i = 0; i < N; i++ ){
        cout << "Inserting ELement " << i+1 << endl;
        heap.insert(rand() %100);
        heap.printHeap();
        cout << endl;
    }
    return 0;

}