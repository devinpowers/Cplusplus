#include<iostream>
using std::cout;
using std::endl;

struct Node{
    int data;
    Node* next;
};
    

void Insert( Node * &head, int data){

    Node*temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}


void removeDuplicates( Node * head ) {

	if ( head == nullptr || ( head && (head->next == nullptr))) {
		return;
	}
    
	Node * curr = head;

	while(curr) {

		Node * runner = curr;

		while (runner->next != nullptr) {

			if (runner->next->data == curr->data) {

                cout << "Values  that duplicate: " << runner->next->data << endl;

				runner->next = runner->next->next;  // set link and fix


                cout << "Removing Duplicate which is: " << curr->data << endl;


			} else {
                // Else continue
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}




void print(Node * &head)
{
    Node* temp = head; // ADddre of the head node

    cout << "List is: ";

    while(temp != NULL){
        //iterate through
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

Node * kthToLastIterative( Node * head, int k ) {
  if ( head == nullptr ) {
    return head;
  }

  Node * ptr1 = head;
  Node * ptr2 = head;

  int i = 0;
  while( i < k && ptr1 ) {
    ptr1 = ptr1->next;
    ++i;
  }

  //out of bounds
  if ( i < k ) {
    return nullptr;
  }

  while( ptr1 != nullptr ) {
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }

  return ptr2;
}


void deleteList( Node * & head ) {

    // Deletes the list
  Node * nextNode;
  while(head) {
    nextNode = head->next;
    delete(head);
    head = nextNode;
  }
}

int main(){

    Node* head = NULL;

    for (int i = 0; i < 10; i++){
        Insert(head, i);
        
    }

    // Insert somemore values
    Insert(head, 7);  // Duplicate
    Insert(head, 5);  // Duplicate

    print(head);
   
    cout << endl;

    removeDuplicates(head);

    cout << "Linked List after Removal of Duplicates: " << endl;
    print(head);

    // Lets delete the Linked List
    std::cout << "4th node from last (Recursive) : ";
    Node *node4 = kthToLastRecursive(head, 4);
    if ( node4 != nullptr ) {
        std::cout << node4->data << std::endl;
    } else {
        std::cout << "NULL NODE\n";
    }

    deleteList(head);

    cout << "List Deleted:" << endl;

    print(head);



}