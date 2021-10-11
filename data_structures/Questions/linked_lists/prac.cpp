
#include <iostream>

struct Node {
  int data;
  Node * next;
  Node(int d) : data{ d }, next{ nullptr } { }  // constructor sets new node
};

void insert( Node * &head, int data ) {
  Node * newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

void printList( Node * head ) {
  while(head) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "null" << std::endl;
}

int main() {
  Node * head = nullptr;
  for ( int i = 7; i > 0; i-- ) {
    insert(head, i);
  }
  std::cout << "List: ";
  printList(head);
}
