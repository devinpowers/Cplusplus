/*
Stack Min

*/
#include <iostream>
#include "stack.h"

template<typename T>
class StackMin{

    private:
        Stack<T> stack;
        Stack<T> minStack; // hold min value

    public:
        template <typename U>
        void push(U&& value){
            // Only real thing you change tbh
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

/*
int main() {

    StackMin<int> stack;
    for (auto v : {5, 10, 4, 9, 3, 3, 8, 2, 2, 7, 6})
    {
        stack.push(v);
        std::cout << "Pushed value: " << v << ", min value: " << stack.min() << std::endl;
    }
    while (!stack.isEmpty())
    {
        auto v = stack.pop();
        std::cout << "Popped value: " << v;
        if (stack.isEmpty())
            std::cout << ", stack is empty" << std::endl;
        else
            std::cout << ", min value: " << stack.min() << std::endl;
    }
 
    // Create a stack min class
    StackMin<int> stack;

    for (auto v : {5, 10, 12, 6, 4, 2, 23, 8}){
        stack.push(v);
    }
    // check min value

    std::cout << "Min value is, after pushing values onto our stack: " << stack.min() << std::endl;
    std::cout << "MIN stack" << std::endl;
    std::cout << stack.pop() << std::endl;

      while(stack.isEmpty() != true){
        // pop all elements from the stack
        std::cout << stack.pop() << std::endl;
    }
   

 
}
*/
