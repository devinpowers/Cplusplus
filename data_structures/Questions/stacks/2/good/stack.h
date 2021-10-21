/*

Stack Implemented with Templated
*/


#include <utility>

template <typename T>
class Stack
    {
        private:
            struct Node
            {
                Node(T &v, Node *n): value(v), next(n){}
                T value;       
                Node *next;  
            };

            Node *top;              
            size_t stackSize;       

        public:
            Stack() : top(nullptr), stackSize(0){}   // normal constructor

            ~Stack()
            {
                while (!isEmpty())
                    pop();
            }
            
            void push(T value) {       
                auto n = new Node(value, top);
                top = n; 
                ++stackSize;
            }
          

            T& peek()
            {   
                if (!top)
                    throw StackIsEmptyException();
                return top->value; 
            }

            T pop()
            {
                if (!top)
                {  
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
                return !top;
            }

            size_t size() const
            {
                return stackSize;
            }

            class StackIsEmptyException{};
    
};


