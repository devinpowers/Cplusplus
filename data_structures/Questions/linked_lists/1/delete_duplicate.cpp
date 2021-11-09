/*

  Problem 1: Linked Lists
  Remove Duplicates

*/


#include<iostream>

using std::cout;
using std::endl;

struct Node{
    int data;
    Node* next;
};

void Insert( Node * &head, int x){

    Node*temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void removeDuplicates( Node* head ) {

	if ( head == nullptr || ( head && (head->next == nullptr))) {
		return;
	}

	Node* curr = head;

	while(curr) { 

		Node* runner = curr;

		while (runner->next != nullptr) {

			if (runner->next->data == curr->data) {

				runner->next = runner->next->next;  

			} else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}


void print(Node* &head)
{
    Node* temp = head; // Address of the head node

    cout << "List is: ";
    while(temp != NULL){
        //iterate through
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;
    cout << endl;
  
    
    Insert(head, 9);
    Insert(head, 6);
    Insert(head, 2);
    Insert(head, 4);
    Insert(head, 2);

    print(head);
   
    cout << endl;
    
    removeDuplicates(head);

    cout << "Linked List after Removal of Duplicates: " << endl;
    print(head);

    cout << endl;
}


