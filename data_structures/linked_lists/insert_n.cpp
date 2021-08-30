
#include<iostream>
using std::cout; using std::endl;
using std::cin;

struct Node{
	int data;
	Node* next;
};


Node* head; // Global Variable, can be accessed anywhere

void Insert(int data, int n)
{
    Node* temp1 = new Node(); // Creating a Node Pointer
    temp1->data = data;         // Accessing attributes in the Node
    temp1->next = NULL;
    if (n == 1){
        temp1->next = head;
        head = temp1;
        return; 
    }
    Node* temp2 = head;
    for (int i =0; i <n-2; i++ )
    {
        temp2 = temp2->next;   
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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

int main()
{
    head = NULL; // Empty List
    Insert(2,1); // List: 2
    Insert(3,2); // List: 2, 3
    Insert(4,1); // List; 4,2,3
    Insert(5,2); // List: 4,5,2,3 
    Insert(16,4); // List; 4,5,2,3,69

    Insert(69,5); // List; 4,5,2,3,69

    
    print();
}

