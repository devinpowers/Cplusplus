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

            void push(T value) {       // Why the U and the &&
                
                auto n = new Node(value, top); // new keyword to insert a new node into our Stack
                top = n; // pass address to top of the stack
                ++stackSize;
            }
          
            T &peek()
            {   // Peek but DONT remove element
                if (!top)
                {
                    throw StackIsEmptyException();
                }
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






