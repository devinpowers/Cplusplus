
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


Node * kthToLastHelper( Node * head, int k , int & i) {
  if ( head == nullptr ) {
    return nullptr;
  }

  Node * node = kthToLastHelper(head->next, k, i);
  i = i + 1;
  //if we have solved problem k times from last.
  if ( i == k ) {
    return head;
  }
  return node;
}


Node * kthToLastRecursive( Node * head, int k ) {
  int i = 0;
  return kthToLastHelper(head, k, i);
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

    ptr1 = ptr1->next; // will go until the end of the linked list
    ++i;

  }

  std::cout << "i: " << i << std::endl;

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



int main() {

  Node * head = nullptr; 
  insert(head, 10);
  insert(head, 9);


  for ( int i = 7; i > 0; i-- ) {
    insert(head, i);
  }
  insert(head, 10);
  insert(head, 69);
  insert(head, 12);

  std::cout << "List: ";
  printList(head);

  /*
  std::cout << "4th node from last (Recursive) : ";
  Node *node4 = kthToLastRecursive(head, 4);
  if ( node4 != nullptr ) {
    std::cout << node4->data << std::endl;
  } else {
    std::cout << "NULL NODE\n";
  }
  */

  std::cout << "4th node from last (Iterative) : ";
  Node *node4 = kthToLastIterative(head, 4);
  if ( node4 != nullptr ) {

    std::cout << node4->data << std::endl;

  } else {

    std::cout << "NULL NODE\n";

  }

  deleteList(head);

}

