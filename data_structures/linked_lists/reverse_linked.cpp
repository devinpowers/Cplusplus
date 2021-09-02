#include<iostream>
using std::cout;
using std::endl;

struct Node{
	int data;
	Node* next;
};

Node* head;

void Insert(int x)
{
    Node* temp = new Node(); // Create New Node to Insert
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
	Node* temp = head; // address of the head node

    cout << "List is: ";

	while(temp!=NULL){
        
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<< endl;
}


void Reverse()
{
    Node *current, *next, *previous;
    current = head;
    previous = NULL;

    while (current != NULL)
    {
        cout << "Current Node: " << current->data << endl;
        next = current->next;
        cout << " next: " << next->data << endl;
        current->next = previous;
        previous = current; 
        current = next;
    }
    head = previous;
}


int main()
{
    //INsert then print

    Insert(5);
    Insert(6);
    Insert(4);
    Insert(2);
    cout << "Before Reversing Linked List: " << endl;
    print();
    cout << "After Reversing Linked List: " << endl;
    Reverse();
    print();
}


