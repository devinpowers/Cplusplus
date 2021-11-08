/**
 * Cracking the coding interview edition 6
 * Problem 2.5 Sum lists
 * You have two numbers represented by linked list, where each node contains
 * a single digit. Digits are stored in reverse order.(1's digit is at the head)
 * Write a function that adds two such numbers and returns a number in similar
 * list format.
 * example:
 * 7-->1-->6 + 5-->9-->2 = 2-->1-->9
 * which is (617 + 295  = 912)
 * What if digits are not stored in reverse order(i.e 1's digit is at tail)
 * (6--1-->7) + (2-->9-->5) = (9-->1-->2)
 *
 * Approach:
 * We will solve the problem recursively and iteratively.
 * Add numbers at same digits place, store the 1's digit of the output in new list
 * and add carry in next place's addition.
 *
 * Finally, we will solve the follow up.
 */

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

    // Add two linked lists together iteratively
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

  while( list1 || list2 ) {
    // add the values, if one of the list has already been traversed, add 0
    value = carry + (list1 ? list1->data : 0 ) + (list2 ? list2->data : 0);

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
  std::cout << "Iterative Solution: \n";
  std::cout << "List3:  ";
  printList(list3);

}



