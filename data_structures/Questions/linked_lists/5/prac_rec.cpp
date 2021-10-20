#include <iostream>

struct Node {
  int data;
  Node * next;
  Node ( int d ) : data{ d }, next{ nullptr } { }
};

/**
 * [insert - insert a new node at head of the list]
 * @param head [head of the list]
 * @param data [new node's data]
 */
void insert( Node * & head, int data ) {
  Node * newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}


void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}







void deleteList( Node * & head ) {
    Node * nextNode;
    while(head) {
        nextNode = head->next;
        delete(head);
        head = nextNode;
    }
}

Node * add_recursive( Node * list1, Node * list2, int carry) {
  if ( list1 == nullptr && list2 == nullptr && carry == 0 ) {
    return nullptr;
  }
  int value = carry;
  if ( list1 ) {
    value += list1->data;
  }
  if ( list2 ) {
    value += list2->data;
  }

  Node * resultNode = new Node( value % 10 );

  resultNode->next = add_recursive( list1 ? (list1->next) : nullptr,
                                    list2 ? (list2->next) : nullptr,
                                    value > 9 ? 1 : 0 );
  return resultNode;
}


int main()
{
  //making list 1 for number 617
  Node * list1 = nullptr;
  insert(list1, 6);
  insert(list1, 1);
  insert(list1, 7);
  std::cout << "List1:  ";
  printList(list1);

  //making list2 for number 295
  Node * list2 = nullptr;
  insert(list2, 2);
  insert(list2, 9);
  insert(list2, 5);
  std::cout << "List2:  ";
  printList(list2);

  Node * list4= add_recursive(list1, list2, 0);
  std::cout << "Recursive Solution: \n";
  std::cout << "List4:  ";
  printList(list4);


}
