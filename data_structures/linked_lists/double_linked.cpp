#include<iostream>
using std::cout;
using std::endl;

struct Node{
	int data;
	Node* next;
    Node* previous;
};

Node* head = NULL;



void Insert(int x) {

  // Wrong

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

int main(){
    Insert(5);
    Insert(6);
    Insert(4);
    Insert(2);
    print();
}