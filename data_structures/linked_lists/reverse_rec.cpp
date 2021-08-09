#include<iostream>
using std::cout;
using std::endl;

struct Node{
	int data;
	Node* next;
};

Node* head=NULL;

void Insert(int x)
{
    Node* temp = new Node(); // Create New Node to Insert
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Reverse(Node* p)
{
    if (p->next == NULL)
    {
        //Exit condition
        head = p;
        return;
    }
    Reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

void printLinkedList(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<< endl;
}
int main()
{
    head=NULL;

    Insert(5);
    Insert(6);
    Insert(4);
    Insert(2);
    cout << "Print Before Reversed " << endl;
    printLinkedList();
    Reverse(head);

    cout << "Print Linked List" << endl;
    printLinkedList();
}