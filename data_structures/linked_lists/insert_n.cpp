
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

void Delete(int n)
{
    Node* temp1 = head;

    if (n == 1)
    {
        head = temp1->next; // head now points to second node
        delete(temp1); // Remove memory From HEAP
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
    Insert(2,1); // List: 2
    Insert(3,2); // List: 2, 3
    print();
    Insert(4,1); // List; 4,2,3
    print();
    Insert(5,2); // List: 4,5,2,3 
    print();
    Insert(16,4); // List; 4,5,2,3,69
    Insert(69,5); // List; 4,5,2,3,6
    Insert(420,1);
    
    print();

    // Lets try to delete

    int position;
    cout << "Enter a Position to Delete: ";

    cin >> position;

    Delete(position);

    print();
}

