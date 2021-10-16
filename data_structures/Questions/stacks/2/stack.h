

#include <utility>

// Templated Stack Data Structure
template <typename T>
class Stack
    {
        private:
            struct Node
            {
                Node(T &&v, Node *n): value(std::move(v)), next(n){}

                Node(const T &v, Node *n): value(v), next(n){}

                T value;
                Node *next;  // Next in the stack
            };

            Node *top;              // Top value in stack (pointer to it)
            size_t stackSize;       // Size of the stack

        public:
            Stack() : top(nullptr), stackSize(0){}   // constructor

            Stack(Stack &&other) : top(std::move(other.top)), stackSize(std::move(other.stackSize)){}

            ~Stack()
            {
                while (!isEmpty())
                    pop();
            }

            template <typename U>
            void push(U &&value)
            {
                auto n = new Node(std::forward<U>(value), top); // new keyword to insert a new node into our Stack
                top = n;
                ++stackSize;
            }

            T &peek()
            {
                if (!top)
                    throw StackIsEmptyException();
                return top->value;
            }

            T pop()
            {
                if (!top)
                    throw StackIsEmptyException();
                auto value(std::move(top->value));
                auto n = top;
                top = n->next;
                delete n;
                --stackSize;
                return value;
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
