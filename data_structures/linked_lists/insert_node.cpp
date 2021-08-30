

#include<iostream>
using std::cout; using std::endl;
using std::cin;

struct Node{
	int data;
	Node* next;
};


Node* head; // Global Variable, can be accessed anywhere

void Insert(int x)
{
    Node* temp = new Node(); // Create New Node to Insert
    temp->data = x;  // De-Reference to Modify the value at this particular address
    temp->next = head;
    head = temp;
}

void print()
{

    // Print Linked Lists
	Node* temp = head; // address of the head node pointing to the first node in the linked list

    cout << "List is: ";

	while(temp!=NULL){
        // Iterate through
		cout<<temp->data<<"->";

		temp=temp->next;
	}
	cout<< endl;
}


int main()
{
    head = NULL; // Empty Linked List

    cout << "How Many numbers? \n";
    int n, i, x;

    cin >> n;

    for (i = 0; i <n; i++ ){
        cout << "Enter the number \n";
        cin >> x;
         Insert(x);
         print(); // Print out Current linked List
    }

    cout << "W" << endl;
}

//The Final thing we need to do, it to write the address of this 
//newly created node in A.

//OUr Linked list is intact now, we have one node!

