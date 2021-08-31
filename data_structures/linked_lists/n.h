

#include<iostream>
using std::cout; using std::endl;
using std::cin;

struct Node{
	int data;
	Node* next;
};


Node* head =  NULL; // Global Variable, can be accessed anywhere (Empty List)

void Insert(int data, int n)
{
    Node* temp1 = new Node(); 
    temp1->data = data;         
    temp1->next = NULL;


    if (n == 1){
        // Like Regular Insert at Begining  Code
        temp1->next = head;
        head = temp1;
        return; // Finish, exit
    }
    // Else, were inserting at another position other than Begining
    
    Node* temp2 = head;
    // Iterating Memory from Head (beginning of our Linked List)

    for (int i = 0; i < n-2; i++ )
    {
        // Find the position ONE BEFORE where we want to insert
        temp2 = temp2->next;   // Store Address  
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}


void print()
{
	Node* temp420 = head; // address of the head node

    cout << "List is: ";

	while(temp420!=NULL){
        
		cout<<temp420->data<<"->";
		temp420=temp420->next;
	}
	cout<< endl;
}