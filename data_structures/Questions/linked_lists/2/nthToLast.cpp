/*
  Find nth to last element in a linked list

  Iterative Solution

*/

#include <iostream>

struct Node{
    int data;
    Node* next;
};

void insert( Node * &head, int data){

    Node*temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}


void deleteList( Node * & head ) {
  Node * nextNode;
  while(head) {
    nextNode = head->next;
    delete(head);
    head = nextNode;
  }
}

void printList( Node * head ) {
  while(head) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "null" << std::endl;
}




Node * kthToLastIterative( Node * head, int k ) {
  // Return node at the k nth position

  if ( head == nullptr ) {
    return head; // Empty List so return
  }

  Node * ptr1 = head;  // Two Pointers to keep track
  Node * ptr2 = head;

  int i = 0;

  while( i < k && ptr1 ) {
    // Move ptr1 k spots ahead!
    ptr1 = ptr1->next; 
    ++i;
  }

  std::cout << "PTR1 Data: " << ptr1->data << std::endl;
  // Out of Bounds

  std::cout << "i: " << i << std::endl;
  if ( i < k ) {
    return nullptr;
  }

  while( ptr1 != nullptr ) {
    // move until ptr1 is at end
    // ptr2 will be in the correct position!
    // So the logic is first move Pointer 1 up knth spots from Pointer 2. Then move both pointers up untill Pointer 1 equals NULL and is at the end, Then pointer 2 will be at our nth from last position
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  return ptr2;
}



int main() {

  Node * head = nullptr;

  for ( int i = 9; i > 0; i-- ) {
    insert(head, i);
  }
  std::cout << "List: ";
  printList(head);

  std::cout << "4th node from last (Iterative) : ";
  Node *node4 = kthToLastIterative(head, 4);

  if ( node4 != nullptr ) {
    std::cout << "Node at 4th spot is: " << node4->data << std::endl;
  } else {
    std::cout << "NULL NODE\n";
  }

}

