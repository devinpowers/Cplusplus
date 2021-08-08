
/*
    Project: Print Linked List Forward and Reverse using Recursion
    Auther: Devin Powers
    Date: August 8th 2021
*/

#include<iostream>
using std::cout;
using std::endl;

struct Node{
	int data;
	Node* next;
};

Node* head=NULL;

void print_forward(Node* p)
{
	if (p == NULL)
    {
        return; // Exit Condtion
    }
    cout << p->data << " -> "; // prints value in the node
    print_forward(p->next); // Recusive Call
    cout << endl;

 
}
void print_reverse(Node* p)
{
    if (p == NULL)
    {
        return;
    }
    print_reverse(p->next);  // Recursive Call
    cout << p->data << " -> ";
}


void Insert(int x)
{
    Node* temp = new Node(); // Create New Node to Insert
    temp->data = x;
    temp->next = head;
    head = temp;
}

int main(){

    head=NULL;

    Insert(5);
    Insert(6);
    Insert(4);
    Insert(2);

    cout << "Print Linked List Forward (Recusion) " << endl;
    print_forward(head);



    cout << "Print Linked List Reverse (Recusion) " << endl;
    print_reverse(head);
    cout << endl;




    
}