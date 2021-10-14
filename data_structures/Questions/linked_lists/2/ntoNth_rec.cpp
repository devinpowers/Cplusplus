/*
  Find nth to last element in a linked list

  Recursive Solution

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


Node * kthToLastHelper( Node * head, int k , int & i) {
  if ( head == nullptr ) {
    std::cout << "finish I believe? " << std::endl;
    return nullptr;
  }
  std::cout << "recursive call again!" << std::endl;


  Node * node = kthToLastHelper(head->next, k, i);
  std::cout << "point " << std::endl;

  std::cout << "i: " << i << std::endl;
  std::cout << "k: " << i << std::endl;

  i = i + 1;

  //if we have solved problem k times from last.
  if ( i == k ) { // Exit condition!
    return head;
  }

  return node; // returns node to kthToLastRecursive
}

Node * kthToLastRecursive( Node * head, int k ) {
  int i = 0;
  return kthToLastHelper(head, k, i);  // Recursive call
}


int main() {

  Node * head = nullptr; 

  for ( int i = 9; i > 0; i-- ) {
    insert(head, i);
  }

  std::cout << "List: ";
  printList(head);
  
  std::cout << "4th node from last (Recursive) : " << std::endl;
  Node *node4 = kthToLastRecursive(head, 4);
  if ( node4 != nullptr ) {
    std::cout << node4->data << std::endl;
  } else {
    std::cout << "NULL NODE\n";
  }

  // deleteList(head);
  std::cout << "List: ";
  printList(head);

}