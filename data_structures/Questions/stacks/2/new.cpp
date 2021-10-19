/*
https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/

*/

// C++ program to Implement a stack
//using singly linked list

#include <iostream>
using namespace std;

template <typename T>
classStack{

    private:

        struct Node{
            int data;
            struct Node *next;
        };

        Node* top = NULL;


    public:

        Stack() : top(nullptr){} // Constructor

        ~Stack()
                {
                    while (!isEmpty())
                        pop();
                }

        template <typename U>
        void push(U &&value)
        {
            auto n = new Node(std::forward<U>(value), top); // new keyword to insert a new node into our Stack
            top = n; // Top of 
            // std::cout << "Top: " << top->value << std::endl;
            ++stackSize;
        }


}
struct Node {
   
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}