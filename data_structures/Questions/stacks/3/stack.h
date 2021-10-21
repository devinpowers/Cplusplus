/*
Stack Implemented with Templated
*/
#include <iostream>

template <typename T>
class Stack
    {
        private:
            struct Node
            {
                Node(T &val, Node *n): value(val), next(n){}  // create a new Node
                T value;       
                Node *next;  
            };

            Node *top;              
            size_t stackSize;       

        public:
            Stack() : top(nullptr), stackSize(0){}   // normal constructor

            ~Stack(){ // Deconstructor
                while (!isEmpty())
                    pop();
            }

            void push(T value) {      

                std::cout << "Using push() from stack.h****** " << std::endl;
                
                auto n = new Node(value, top);
                top = n; 
                ++stackSize;
            }
          
            T& peek() // why the &? Because the return value is reference to the data type t!!!
            {  
                std::cout << "Using peek() from stack.h******" << std::endl;

                if (!top)
                {
                    throw StackIsEmptyException();
                }
                return top->value; // return the top value in the Stack
            }

            T pop()
            {
                std::cout << "Using pop() from stack.h****** " << std::endl;

                if (!top)
                {   // if empty
                    throw StackIsEmptyException();
                }
                else {

                    auto value = top->value;
                    auto n = top;
                    top = n->next; 
                    delete n;
                    --stackSize;
                    return value;
                }
            }

            bool isEmpty() const
            {
                std::cout << "Using isEmpty() from stack.h****** " << std::endl;

                return !top;
            }

            size_t size() const
            {
                std::cout << "Using size() from stack.h****** " << std::endl;

                return stackSize;
            }

            class StackIsEmptyException{};
};




