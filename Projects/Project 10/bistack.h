#ifndef BISTACK_H
#define BISTACK_H

#include<iostream>
using std::ostream;
using std::cout; using std::endl;
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
        ElementType *ary_ = nullptr;   // the array of type ElementType (templated)
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

    // Methods

    ElementType top1();
    ElementType top2();

    const size_t size();
    const size_t max();
    const size_t capacity();

    void pop1();
    void pop2();
    
    void push1(ElementType);
    void push2(ElementType);

    bool empty1();
    bool empty2();

    friend ostream& operator<< <ElementType>(ostream&, const BiStack&);
};

template<typename ElementType>
BiStack<ElementType>::BiStack(size_t initial_size, size_t max_size)
{
    // Size constructor that initializes the variables
    size_ = initial_size;
    max_size_ = max_size;
    ary_ = new ElementType[size_]; // Creates new dynamically allocated array of size
    top1_ = -1;
    top2_ = size_;
  
}

template<typename ElementType>
BiStack<ElementType>::BiStack(initializer_list<ElementType> list_, size_t max_size)
{
    // List Constructor Example -> {3,4,5,6,1,2,3,4}
    size_ = list_size();
    max_size_ =max_size;
    top1_ = -1;
    top2_ = size_;
    // Create new Array to hold our list items
    ary_ = new ElementType[size_]{};
    size_ index = 0;

    for (auto e : list_)
    {
        ary_[index++] = e;
    }
    // Update the top of Stack 1
    top1_ = index =1;
}

// The Copy Constructor

template<typename ElementType>
BiStack<ElementType>::BiStack(const BiStack<ElementType> &s)
{
    cout << "Using the Copy Constructor " << endl;
    size_ = s.size_;
    max_size_ = s.max_size_;

    top1_ = s.top1_;
    top2_ = s.top2_;

    ary_ = new ElementType[s.size_];
    copy(s.ary_, s.ary_+s.size_, ary_); // Copy Elements from array to new construtor
}

template <typename ElementType>
ElementType BiStack<ElementType>::top1()
{    // Similar to the Stack used in Week Examples

    if (top1_ < 0)
    {
        throw underflow_error("Top1, empty stack");
    }
    // Otherwise return the top element of top2()
    return ary_[top1_];
}


template <typename ElementType>
ElementType BiStack<ElementType>::top2()
{    // Free Cuba! (FREE CUBA)

    if (top2_ == size_ )
    {
        throw underflow_error("Top2, empty stack");
    }
    // Otherwise return the top element of top2()
    return ary_[top2_];
}


template <typename ElementType>
size_t const BiStack<ElementType>::max()
{
    // Return a max size
    return max_size_;
}

template <typename ElementType>
size_t const BiStack<ElementType::size()
{
    // Return the number of elements in stacks
    return top1_ + 1 + (size_ - top2_);

}
template <typename ElementType>
size_t const BiStack<ElementType::capacity()
{
    // Return the current size
    return size_;
}

template <typename ElementType>
void BiStack<ElementType::pop1()
{
    if (top1_ < 0)
    {
        throw underflow_error("pop, empty stack");
    }
    --top1_;

}

template <typename ElementType>
void BiStack<ElementType::pop2()
{
        if (top2_ == size_)
    {
        throw underflow_error("pop, empty stack 2 ");
    }
    ++top2_;
}

template <typename ElementType>
bool BiStack<ElementType::empty1()
{
    // Checks if there are elements in stack 1
    return top1_ == -1;
}

template <typename ElementType>
bool BiStack<ElementType::empty2()
{
    // Checks if there are elements in stack 2
    return top2_ == size_;
}

// Print out our BiStack

template <typename ElementType>
ostream& operator<<(ostream &out, const BiStack<ElementType> &stack)
{
    ostringstream oss;
    string outstring;

    if (stack.top1_ != -1)
    {
        out << "Top1 index: " << stack.top1_ << endl;
    }
    else{
        out << "Top1 is Empty " << endl;
    }

    if (stack.top2_ != stack.size_)
    {
        out << "Top2 Index: " << stack.top2_ << endl;
    }
    else{
        out << "Top2 is Empty" << endl;
    }

    // Let's print out the Size and Capacity of the BiStack
    out << "Size: " << size_.top1_+1 + (size_.size - size_.top2_) << endl;
    out << "Capacity of BiStack: " << stack.size_ << endl;

}






#endif
 