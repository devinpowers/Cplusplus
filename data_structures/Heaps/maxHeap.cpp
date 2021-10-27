/*
        maxHeap implementation
*/

#include <iostream>
#include <vector>
using std::vector;
using std::endl;
using std::cout;


class MaxHeap {

    private:
        int _size;
        vector<int> vect = {-1};

        int p(int i ){
            // return parent
            return i >> 1;       //  i/2
            }; 

        int l(int i){
             return i<<1;        // i = 2 
             }; 
        int r(int i){
            return (i<<1) +1;   // i*2 +1
            };

    public:
        bool isEmpty() const {return _size == 0;};
        int getMax() const {return vect[1];};
        void insertItem(int val);
        void shiftUp(int i);
        int extractMax();
        void shiftDown(int i);

};

void MaxHeap::shiftUp(int i){
    if (i > _size) return;
    if (i == 1) return;

    if (vect[i] > vect[p(i)]){
        std::swap(vect[p(i)], vect[i]);
    }
    shiftUp(p(i));
}


void MaxHeap::insertItem(int val){
    if (_size + 1 >= vect.size()){
        vect.push_back(0);
    }
    vect[++_size] = val;
    shiftUp(_size);
    return;
}

void MaxHeap::shiftDown(int i){
    if (i > _size) return;

    int swapId = i;

    if(l(i) <= _size && vect[i] < vect[l(i)]){
        swapId = l(i);
    }
    if (r(i) <= _size && vect[swapId] < vect[r(i)]){
        swapId = r(i);
    }
    if (swapId != i){
        std::swap(vect[i], vect[swapId]);
        shiftDown(swapId);
    }
    return;
}

int MaxHeap::extractMax(){
    int maxNum = vect[1];
    std::swap(vect[1], vect[_size--]);
    shiftDown(1);

    return maxNum;
    
}


int main() {
    MaxHeap* PriorityQueue = new MaxHeap();

    if (PriorityQueue->isEmpty()){
        cout << "yes, this is the correct answer" << endl;
    }
    else{
        cout << "We have a problem with our isEmpty function" << endl;
    }

    PriorityQueue->insertItem(10);
    PriorityQueue->insertItem(120);
    PriorityQueue->insertItem(34);
    PriorityQueue->insertItem(41);
    PriorityQueue->insertItem(5);
    cout << PriorityQueue->getMax() << endl;
    PriorityQueue->extractMax();

    cout << PriorityQueue->getMax() << endl;
    if (PriorityQueue->isEmpty()){
        cout << "We have a problem with our isEmpty function" << endl;
    }
    else {
        cout << "Correct " << endl;
    }
}


/*

0   1   2   3   4   5
-1  100 75  95  60  90

        100
    75         95
60      65  90

100 (top node), its left child 75 next to it, 


*/

/*

the first index (0) represents a "random memeber"



*/

