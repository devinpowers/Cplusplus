/*
Stack Min

How would you design a stack which, in addition to push and pop, has function min which the minimum element?
Push, pop and min should all operate in O(1) time.

*/

#include <iostream>
#include "stack.h"

template<typename T>
class StackMin{

    private:
        Stack<T> stack;
        Stack<T> minStack; // hold "min values"

    public:
    
        void push(T value){
            if (minStack.isEmpty() || value <= minStack.peek()){
                std::cout << "Pushing " << value << " on Min ! " << std::endl;
                minStack.push(value);
            }
            stack.push(value);
        }

        T peek(){ // Regular "Stack"
            return stack.peek();
        }

        T min(){ // Peek for minStack
            return minStack.peek();
        }
        T pop(){
            // Pop from minstack as well if needed!
    
            auto value = stack.pop();
            if (value == min() ){
                minStack.pop();
            }
            return value;
        }

        bool isEmpty(){
            return stack.isEmpty();
        }
};

