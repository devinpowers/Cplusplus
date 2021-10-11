
#include <utility>

template <typename T>
class Stack {

     private:
            // Private Shit
        struct Node {

            Node(T &&v, Node *n): value(std::move(v)), next(n){} // Constructor

            Node(const T &v, Node *n): value(v), next(n){} // constructor
 
            T value; // T value I think is the Top Value
            Node *next; // Next Value in the Stack
        };

        Node *top; // Pointer to the stack

        size_t stackSize;  // Stack Size


    public:
        Stack() : top(nullptr), stackSize(0){} // Constructor

        Stack(Stack &&other) : top(std::move(other.top)), stackSize(std::move(other.stackSize)) { }

        ~Stack() // Deconstructor
        {
            while (!isEmpty())
                pop();
        }

        template <typename U>
        void push(U &&value)    // Push value onto the stack
        {
            auto n = new Node(std::forward<U>(value), top);
            top = n;                                        // top of the stack
            ++stackSize;                                     // Increase the StackSize by 1
        }

        T &peek()       // Return the Top of the stack (don't remove tho)
        {
            if (!top) // Empty
                throw StackIsEmptyException();  // Throw Exception
            return top->value; 
        }

        T pop() // Remove value from the stack
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
            // Check if the Stack is Empty
            return !top;
        }

        size_t size() const
        {
            // Check the Stack Size
            return stackSize;
        }

        class StackIsEmptyException{

        }; // Not sure what this is


};


