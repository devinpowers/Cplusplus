#include <iostream>
#include "stack.h"

using std::vector;

template <typename T, size_t Capacity>
class SetOfStacks{

    private:

        Stack<Stack<T>> stacks;
    
    public:

        template <typename U>
        void push(U && value){
            // push onto stack
        }


}