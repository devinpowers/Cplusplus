#ifndef BISTACK_H
#define BISTACK_H

#include<iostream>
using std::ostream;
#include<string>
using std::string; using std::to_string;
#include<iterator>
using std::ostream_iterator;
#include<sstream>
using std::ostringstream;
#include<algorithm>
using std::copy;
using std::swap;
#include<initializer_list>
using std::initializer_list;

// Declarations
template<typename ElementType>
class BiStack;

template<typename ElementType>
ostream& operator<<(ostream& out, const BiStack<ElementType> &s);


// Definitions
template<typename ElementType>
class BiStack{
    // Attributes
    private:
        ElementType *ary_ = nullptr;
        int size_ = 4; // Size of Array
        int max_size_ = 16;
        int top1_ = -1;
        int top2_ = size_;
        void grow_and_copy();

    public:

    // Constructors
    BiStack() = default;
    BiStack( size_t initial_size, size_t max_size = 16);
    BiStack(initializer_list<ElementType>, size_t max_size = 16);

    // Copy Constructor
    BiStack(const BiStack &s);
    // Deconstructor
    ~BiStack();
    // Overloaded =
    BiStack& operator=(BiStack);


}

#endif
 