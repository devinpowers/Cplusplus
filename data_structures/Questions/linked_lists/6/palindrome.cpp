/**
 * Implement a function to check if a list is a palindrome.
 *
 * Approach 1: Reverse the half the list and compare with other half.
 * Approach 2: Iterative Approach
 * 							- Push half the list in stack,
 * 							- Compare the rest of the list by popping off from the stack
 * Approach 3: Recursive Approach
 */

#include <iostream>
#include <stack>

struct Node {
  char data;
  Node * next;
  Node ( char c ) : data{ c }, next{ nullptr } { }
};

/**
 * [insert helper routine to insert new node at head]
 * @param head [current head of the list]
 * @param c    [new node's data]
 */
void insert( Node * & head, char c ) {
  Node * newNode = new Node(c);
  newNode->next = head;
  head = newNode;
}

/**
 * [printList = helper routine to print the list]
 * @param head [head of the list]
 */
void printList( Node * head ) {
  while( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}


/**
 * [reversedList helper routine to reverse a list]
 * @param  head [head of current list]
 * @return      [reversed list's head]
 */

void reverse( Node * &head ) {
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


/**
 * [isPallindromeIter1 - Iteratively determine if list is palindrome using reversing the list]
 * @param  head [Head node of the list]
 * @return      [True if list is palindrome, false if not]
 */
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
    ptr2 = ptr2->next;
  }


  //reverse the second half of the list
  reverse(ptr2);

  middleNode = ptr2;
  // now compare the two halves
  ptr1 = head;

  while( ptr1 && ptr2 && ptr1->data == ptr2->data ) {
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }

  //reverse the list again.
  reverse(middleNode);

  if ( ptr2 == nullptr ) {
    return true;
  } else {
    return false;
  }
}

int main()
{
  Node * head1 = nullptr;
  insert( head1, 'a' );
  insert( head1, 'b' );
  insert( head1, 'c' );
  insert( head1, 'c' );
  insert( head1, 'b' );
  insert( head1, 'a' );
  std::cout << "List 1: ";
  printList(head1);
  if ( isPalindromeIter1(head1) ) {
    std::cout << "List 1 is pallindrome list\n";
  } else {
    std::cout << "List 1 is not a pallindrome list\n";
  }
  std::cout << "List 1: ";
  printList(head1);

  Node * head2 = nullptr;
  insert( head2, 'r');
  insert( head2, 'a');
  insert( head2, 'd');
  insert( head2, 'a');
  insert( head2, 'r');
  std::cout << "List 2: ";
  printList(head2);

  

  

 
}
