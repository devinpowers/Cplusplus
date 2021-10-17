#include <iostream>
#include "stack.h"


template<typename T>
class StackMin{

    private:
        // Two stacks: One is our main stack and another is a stack of the "min" value
        Stack<T> stack;
        Stack<T> minStack;

    public:

        void push(T &value){

            if (minStack.isEmpty() || value <= minStack.peek()){
                // push the value onto the minStack
                minStack.push(value);
            }
            // What if minStack isnt empty and the value to be inserted is less than whats currently in the minStack?
            else if{
                // we must pop() current min off stack and place it onto the stack?
                T temp 

            }
            else{
                //  min stack so push onto the main stack
                 stack.push(value);
            }
           
        }
        T &peek(){
            return stack.peek();
        }
        T &min(){
            return minStack.peek();
        }
        T pop(){
            value = stack.pop();
            if (value)
        }


}