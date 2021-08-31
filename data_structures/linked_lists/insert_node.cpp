

#include<iostream>
using std::cout; using std::endl;
using std::cin;

struct Node{
	int data;
	Node* next;
};

Node* head = NULL; // Global Variable, can be accessed anywhere

void Insert(int x)
{
    Node* temp = new Node(); 
    temp->data = x;  
    temp->next = head; // Setting Next pointer to Current Head 

    head = temp;
}

void print()
{
	Node* temp = head; // Address of the head node pointing to the first node in the linked list
    cout << "List is: ";

	while(temp != NULL)
    {    // Iterate through
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<< endl;
}


int main()
{

    cout << "How Many numbers? \n";
    int n, i, x;

    cin >> n;

    for (i = 0; i <n; i++ ){
        cout << "Enter the number \n";
        cin >> x;
         Insert(x);
         print(); // Print out Current linked List
    }

}

