
#ifndef STACK_h
#define STACK_h

// Define the default capacity of the stack
#define SIZE 10
template <class T>
class stack
{
    private:
        T *arr;              
        int top;
        int capacity;
    
    public:
        stack(int size = SIZE);         // Constructor
        ~stack();                       // Destructor
    
        void push(T);    // Push onto the Stack
        T pop();         // Pop value from Stack (T for templated)
        T peek();        // See the top value on the Stack  (T for templated)
        int size();        // Size of the Stack
        bool isEmpty();    // Check Stack is empty
        bool isFull();     // Check is Stack is full
};


// Implementations

template <class T>
stack<T>::stack(int size)
{
    arr = new T[size];
    capacity = size;
    top = -1;            // index
}
 
// Destructor to free memory allocated to the stack
template <class T>
stack<T>::~stack() {
    delete[] arr;
}

template <class T>
void stack<T>::push(T x)
{
    if (isFull())
    {
        cout << "Overflow Program Terminated" << endl;
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << x << endl;
    // Add value to the Stack
    arr[++top] = x;
}
 
// Utility function to pop a top element from the stack
template <class T>
T stack<T>::pop()
{
    if (isEmpty())
    {
        cout << "Underflow Program Terminated " << endl;
        return 0;
    }
    cout << "Removing " << peek() << endl;

    // decrease stack size by 1 and (optionally) return the popped element
    return arr[top--];
}
 
// Utility function to return the top element of the stack
template <class T>
T stack<T>::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        cout << "Stack is Empty " << endl;
        return 0;
    }
}
 
// Utility function to return the size of the stack
template <class T>
int stack<T>::size() {
    cout << "Called" << endl;
    return top + 1;
}
 
// Utility function to check if the stack is empty or not
template <class T>
bool stack<T>::isEmpty() {
    // Returns True if top == -1
    // Else Returns False
    return top == -1; 
}
 
// Utility function to check if the stack is full or not
template <class T>
bool stack<T>::isFull() {
    return top == capacity - 1;
}

#endif


