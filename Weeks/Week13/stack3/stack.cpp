#include<string>
using std::string;
#include<iterator>
using std::ostream_iterator;
#include<algorithm>
using std::copy;
#include<initializer_list>
using std::initializer_list;
#include<stdexcept>
using std::overflow_error; using std::underflow_error;
#include<iostream>
using std::cout; using std::endl;


#include "stack.h"

// Copy Constructor
Stack::Stack(const Stack &s){
    cout << "Using the Copy Constructor  " << endl;
    sz_ = s.sz_;
    top_ = s.top_;
    ary_= new char[s.sz_];
    // ary_ = s.ary_   BAD IDEA, just copies the pointers!!!
    copy(s.ary_, s.ary_+s.sz_, ary_);
}

// Delete Memory
Stack::~Stack(){
    cout << "Deleting Memory " << endl;
    delete [] ary_;
}

// classic, but there's a better way!!! ( = ) Overloaded Operator
Stack& Stack::operator=(const Stack &s){

  cout << "Using the Equal to (=) Operator " << endl;

    if (this != &s){  // this and s are not the same pointer!
	delete [] ary_;
	sz_ = s.sz_;
	top_ = s.top_;
	// is constructor call needed??
	ary_= new char[s.sz_];
	copy(s.ary_, s.ary_+s.sz_, ary_);
    }
    return *this;
}

// Pass Stack as a size
Stack::Stack(size_t sz){
  cout << "Using the size_t dataype constructor " << endl;
  sz_ = sz;
  ary_ = new char[sz];
  top_ = -1;
}

// Pass Stack as a list of char
Stack::Stack(initializer_list<char> c){
  // I think this badboy just takes a list into the constructor and automatically adds them to the array
  cout << "Using the initializer_list Constructor " << endl;
  sz_ = c.size();

  ary_ = new char[sz_];
  size_t indx = 0;
  top_ = sz_ - 1; // It counts index 0 so we have to minus 1

  cout << "Size of top_ = " << top_ << endl;
      
  for (auto e : c)
  {
    // ary_[0] = 'a';
    // ary_[1] = 'e';
    // ary_[2] = 's'; example of how this loop works with the array
    ary_[indx++] = e;

  }

    
}

// Methods to Perform on the Stack Object
// Working with the Stack

char Stack::top(){
  if (top_ < 0)
    throw underflow_error("top, empty stack");
  // Else it will return the 
  return ary_[top_];
}

void Stack::pop(){
  if (top_ < 0)
    throw underflow_error("pop, empty stack");
  cout << "Removed Value" << endl;
  --top_; // Kinda Confused how this value goes away in our Array
}

void Stack::push(char element){
  // cout << "sz:"<<sz_<<" top:"<<top_<<" e:"<<element<<" sub:"<< top_ + (sz_ - 1) << endl;
  if (top_ >= (sz_ - 1) )
  {
    throw overflow_error("push, full stack");
  }
  ary_[++top_] = element; // Else move forward in our stack and add element


}


bool Stack::empty(){
  // Return True or False
  return top_ < 0;
}
  
bool Stack::full(){
  // Return True or False
  return top_ >= ( sz_ - 1);
}

void Stack::clear(){
  // Clears the Stack
  top_ = -1;
}

// Print out the Stack Object

ostream& operator<<(ostream &out, const Stack &s){
    out << "(bottom) ";
    // Extra
    cout << "HELOO WORLD" << s.top_ << endl;
    copy(s.ary_, s.ary_ + s.top_+1,ostream_iterator<char>(out, ","));
    out << " (top)";
    return out;
}


