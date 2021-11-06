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

void removeDuplicates( Node * head ) {

	if ( head == nullptr || ( head && (head->next == nullptr))) {
    // || Refers to the "or" operator
		return;
	}
    
	Node* curr = head;

	while(curr) { 
    // While Current node exisit/not equal to NULL

		Node* runner = curr;

		while (runner->next != nullptr) {

			if (runner->next->data == curr->data) {
                cout << "Values  that duplicate: " << runner->next->data << endl;
				runner->next = runner->next->next;  // set link and fix
                cout << "Removing Duplicate which is: " << curr->data << endl;

			} else {
                // Else if
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
    for (int i = 0; i < 10; i++){
        Insert(head, i);
    }
    
    Insert(head, 3);
    Insert(head, 6);
    Insert(head, 8);
    Insert(head, 1);

    print(head);
   
    cout << endl;

    removeDuplicates(head);

    cout << "Linked List after Removal of Duplicates: " << endl;
    print(head);

    cout << endl;
}


