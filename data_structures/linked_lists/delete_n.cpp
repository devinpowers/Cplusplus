
#include<iostream>
using std::cout; using std::endl;
using std::cin;

struct Node{
	int data;
	Node* next;
};

Node* head; // Global 
Node* end; // Global


void Insert(int x) // Insert an integer at the end of list
{
    Node* temp = new Node(); // Create New Node to Insert

    temp->data = x;
    temp->next = head;
    head = temp;

}



void Delete(int n) // Delete node at position n
{
    Node* temp1 = head;

    if (n == 1)
    {
        head = temp1->next; // head now points to second node
        delete(temp1);
        return; // after we execute
    }


    for (int i = 0; i < n-2; i++ )
    {
        temp1 = temp1->next;
    }

    Node* temp2 = temp1->next; // nth Node
    temp1->next = temp2->next; // (n+1)th Node
    delete(temp2); // Delete temp2

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
    end = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List: 5,6,4,2
    print();
    int n;
    cout << "Enter a Postion to Delete: " << endl;
    cin >> n;
    Delete(n); // Call Delete Function with node postion to remove
    
    print();
}