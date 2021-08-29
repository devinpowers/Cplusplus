

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
    head->
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
	Node* temp= head; // address of the head node

    cout << "List is: ";

	while(temp!=NULL){
        
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
        print();
    }

}



