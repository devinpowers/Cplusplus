#include <iostream>
#include "stack.h"


template<typename G>
class StackMin {

    private:
        Stack<G> stack;         // Vector of Stacks
        Stack<G> minStack;

    public:
        template<typename U>
        void push(U &&value)
        {
            if (minStack.isEmpty() || value <= minStack.peek()){
                minStack.push(value);
            }
            stack.push(std::forward<U>(value));    
        }

        G &peek()
        {
            return stack.peek();
        }

        G &min()
        {
            return minStack.peek();
        }

        G pop()
        {
            auto value = stack.pop();
            if (value == min())
            {  
                minStack.pop();
            }
            return value;
        }

        bool isEmpty()
        {
            return stack.isEmpty(); // Return if Empty
        }
    };

int main()
{
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

}