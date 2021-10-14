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

/**
 * [printList - print the list]
 * @param head [head of the list]
 */
void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}


Node * add_iterative( Node * list1, Node * list2 ) {
  if ( list1 == nullptr ) {
      // List is empty
    return list2;
  }
  if ( list2 == nullptr ) {
      // List is Empty
    return list1;
  }

  // list3 will store result
  Node * list3 = nullptr;
  // for adding new nodes to tail of list3
  Node * list3Tail = nullptr;

  int value = 0, carry = 0;

  
  while( list1 || list2 ) {
    // add the values, if one of the list has already been traversed, add 0
    value = carry + (list1 ? list1->data : 0 ) + (list2 ? list2->data : 0);

    std::cout << "Value: " << value << std::endl;

    std::cout << "Carry: " << carry << std::endl;

    // get the new value and carry
    if ( value > 9 ) {
      carry = 1;
      value = value % 10;
    } else {
      carry = 0;
    }

    //new node
    Node * temp = new Node(value);

    //if this is the first node, populate the result, else add to the tail
    if ( list3 == nullptr ) {
      list3 = temp;
    } else {
      list3Tail->next = temp;
    }

    //make new tail
    list3Tail = temp;

    if (list1) {
      list1 = list1->next;
    }

    if (list2) {
      list2 = list2->next;
    }
  }

  if ( carry > 0 ) {
    list3Tail->next = new Node(carry);
  }
  return list3;

}



void deleteList( Node * & head ) {
    Node * nextNode;
    while(head) {
        nextNode = head->next;
        delete(head);
        head = nextNode;
    }
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

  Node * list3 = add_iterative(list1, list2);

  std::cout << "List3:  ";

  printList(list3);
}
