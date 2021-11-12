/*
What is && in C++ ?: https://www.tutorialspoint.com/What-is-double-address-operator-and-and-in-Cplusplus

Stack Implemented with Templated
*/


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
          

            T &peek()
            {   // Peek but DONT remove element
                if (!top)
                    throw StackIsEmptyException();
                return top->value; // return the top value in the Stack
            }

            T pop()
            {
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
                return !top;
            }

            size_t size() const
            {
                return stackSize;
            }

            class StackIsEmptyException{};
    
};


