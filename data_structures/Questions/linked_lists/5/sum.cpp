

#include <iostream>

struct Node {
  int data;
  Node * next;
  Node ( int d ) : data{ d }, next{ nullptr } { }
};


void insert( Node * & head, int data ) {
  Node* newNode = new Node(data);
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



Node * add_iterative( Node * list1, Node * list2 ) {
  // iterative solution to adding two linked list together


  if ( list1 == nullptr ) {
    return list2;
  }
  if ( list2 == nullptr ) {
    return list1;
  }

  // list3 will store result
  Node * list3 = nullptr;
  // for adding new nodes to tail of list3
  Node * list3Tail = nullptr;

  int value = 0, carry = 0; 

  int iter = 0;

  while( list1 || list2 ) {
    // add the values, if one of the list has already been traversed, add 0
    value = carry + (list1 ? list1->data : 0 ) + (list2 ? list2->data : 0);


    if ( value > 9 ) {
      carry = 1;
      value = value % 10;
    } else {
      carry = 0; // if not over 10 or more
    }

    //new node
    Node * temp = new Node(value);

    //if this is the first node, populate the result, else add to the tail
    if ( list3 == nullptr ) {
      // If first node in linked list 3 (sum of out 2 linked list)
      list3 = temp;
      std::cout << "First Node in List 3 " << std::endl;

    } 
    else {
      list3Tail->next = temp;
    }

  
    //make new tail
    list3Tail = temp;

    iter++; // Up iteration

    std::cout << "iteration: " << iter << std::endl;

    std::cout << "List 3: ";
    printList(list3);

    std::cout << "List3Tail: ";
    printList(list3Tail);

    std::cout << std::endl;
  

    // go to next value(s) in our 2 linked list..return to top to evaluate again
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

  std::cout << std::endl;

  Node * list3 = add_iterative(list1, list2);
  std::cout << "Iterative Solution: \n";
  std::cout << "List3:  ";
  printList(list3);

  std::cout << std::endl;

  // Delete List

  deleteList(list1);
  deleteList(list2);

  printList(list1);
  printList(list2);
  printList(list3);

/*
    Node * list4 = nullptr;
  insert(list4, 3);
  insert(list4, 9);
  insert(list4, 2);
  std::cout << "List4:  ";
  printList(list4);



// List Number 5
    Node * list5 = nullptr;
  insert(list5, 9);
  insert(list5, 2);
  insert(list5, 9);
  std::cout << "List5:  ";
  printList(list5);


  // add the two list together


  std::cout << std::endl;
  Node * list6 = add_iterative(list4, list5);
  std::cout << "Iterative Solution: \n";
  std::cout << "List6:  ";
  printList(list6);
  

  */



}



