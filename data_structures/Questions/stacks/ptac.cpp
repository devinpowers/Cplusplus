/*      
    Another example of implementing a Stack that has min holder/keeper????
    Date: October 17th 2021

*/


#include <iostream>
#include <limits.h>

using namespace std;

typedef int Element;
const Element INVALID_ELEM = INT_MAX;

#ifndef NULL
#define NULL 0
#endif


struct Block{

    Block(Element data, Block* next){
        this->data = data;
        this->next = next;
        this->min = this;
    }
    Element data;
    Block* next;
    // point to the minimum block
    Block* min;
};

class Stack{
    private:
        Block* mTop;
    public:

        Stack()
        {
            mTop = NULL;
        }
        void push(Element data){
            Block* temp = new Block(data, mTop); // New Block added/ (or we can call it node as well)
            if(mTop != NULL && data > mTop->min->data)
            {
                cout << "Using " << endl;
                temp->min = mTop->min;
            }
            mTop = temp;
        }

        void pop(){
            if (mTop != NULL){
                mTop= mTop->next;
            }
        }
        Element min(){
            if (mTop != NULL){
                return mTop->min->data;
            }
            return INVALID_ELEM;
        }
        void print(){
            cout << "[min = " << this->min() << "]  ";
            for (Block* i =mTop; i!= NULL; i=i->next){
                cout << i->data << " -> ";
            }
            cout << "NULL " << endl;
        }
};

// Testing 

int main(){

    Stack s;
    s.push(3); s.print();
    s.push(4); s.print();
    s.push(5); s.print();
        s.push(5); s.print();
    s.push(5); s.print();
    s.push(5); s.print();
    s.push(5); s.print();

    s.push(31); s.print();
     s.push(1); s.print();
    s.push(69); s.print();
     s.push(0); s.print();
      s.push(10); s.print(); 
      s.push(12); s.print();

    // Lets try and pop some elements out of the stac
        cout << "Min Value currently is: " <<  s.min() << endl;

    s.pop();
    s.pop();
     s.pop();
    s.print();

    cout << "Min Value currently is: " << s.min() << endl;
   
}