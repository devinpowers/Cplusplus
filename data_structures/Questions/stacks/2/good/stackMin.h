/*
Stack Min

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

