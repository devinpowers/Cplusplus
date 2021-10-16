#include <iostream>
#include <random>

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



void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}


void reverse( Node * & head ) {
  if ( head == nullptr  || (head && (head->next == nullptr))){
    return;
  }
  Node * newHead = nullptr;
  Node * nextNode = nullptr;
  while ( head ) {
    nextNode = head->next;
    head->next = newHead;
    newHead = head;
    head = nextNode;
  }
  head = newHead;
}


bool isPalindromeIter1( Node * head ) {

  // if list is empty or just contains one node.
  if ( head == nullptr || head->next == nullptr ) {
    return true;
  }

  //step1 figure out middle node.
  Node * ptr1 = head;
  Node * ptr2 = head;
  Node * middleNode = nullptr;

  while( ptr2 && ptr1 && ptr1->next) {
    ptr1 = ptr1->next->next;
    ptr2 = ptr2->next;
  }

  //in case of odd number of nodes, skip the middle one
  if ( ptr1 && ptr1->next == nullptr ) {
        ptr2 = ptr2->next; }
 
  //reverse the second half of the list
  reverse(ptr2);
  printList(ptr2);

  middleNode = ptr2;

  std::cout << "Middle Node: " << middleNode->data << std::endl;


  // now compare the two halves
  ptr1 = head;

  while( ptr1 && ptr2 && ptr1->data == ptr2->data ) {

    // Logic is that if it is palidrone then it will finish to the end of the linked list so ptr2 will be equal to NULL
    // Else if it isnt, it will exit out of this while loop at some point and ptr2 will equal to a value!
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  
  // reverse the list again.
  // reverse(middleNode);
 

  if ( ptr2 == nullptr ) {
    return true;
  } else {
    return false;
  }
}


int main()
{
  Node * head1 = nullptr;
  insert( head1, 1 );
  insert( head1, 2 );
  insert( head1, 3 );
  insert( head1, 9 );
  insert( head1, 3 );
  insert( head1, 2 );
  insert( head1, 1 );

  std::cout << "List 1: ";
  printList(head1);
  if ( isPalindromeIter1(head1) ) {
    std::cout << "List 1 is pallindrome list\n";
  } else {
    std::cout << "List 1 is not a pallindrome list\n";
  }
  std::cout << "List 1: ";
  printList(head1);

  std::cout << std::endl;

  Node * head2 = nullptr;

  insert( head2, 'c' );
  insert( head2, 'a' );
  insert( head2, 'b' );
  insert( head2, 'c' );
  insert( head2, 'c' );
  insert( head2, 'b' );
  insert( head2, 'a' );
  insert( head2, 'c' );
  insert( head2, 'o' );

/*
 std::cout << "List 2: ";
  printList(head2);
  if ( isPalindromeIter1(head2) ) {
    std::cout << "List 2 is pallindrome list\n";
  } else {
    std::cout << "List 2 is not a pallindrome list\n";
  }
  std::cout << "List 2: ";
  printList(head2);  

  std::cout << std::endl;
  */


}

