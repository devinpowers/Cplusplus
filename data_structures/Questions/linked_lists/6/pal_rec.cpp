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



void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}

void reverse(Node * &head ){

    // Iterative solution to reversing Linked List

    Node *current, *next, *previous;
    current = head;
    previous = NULL;

    while ( current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}

bool isPalindromeRecurHelper( Node * & left, Node * right ) {
  //base case Stop when right becomes nullptr
  std::cout << "SOLVING VIA RECURSIVE HELPER " << std::endl;
  if ( right == nullptr ) {
    return true;
  }

  //rest of the list should be palindrome
  bool isPalindrome = isPalindromeRecurHelper(left, right->next);
  if (!isPalindrome) {
    return false;
  }

  // check values at current node.
  isPalindrome = ( left->data == right->data );

  // move left to next for next call.
  left = left->next;

  return isPalindrome;
}

bool isPalindromeRecur( Node * head ) {
  return isPalindromeRecurHelper(head, head);
}


int main(){

  Node * head1 = NULL;
  insert( head1, 1 );
  insert( head1, 2 );
  insert( head1, 3 );
  insert( head1, 3 );
  insert( head1, 2 );
  insert( head1, 1 );
  std::cout << "List 1: ";
  printList(head1);

    if ( isPalindromeRecur(head1) ) {
    std::cout << "List 1 is pallindrome list\n";
  } else {
    std::cout << "List 1 is not a pallindrome list\n";
  }
  std::cout << std::endl;
  
  // not a palidrone

  Node* head2 = NULL;
  insert( head2, 4 );
  insert( head2, 2 );
  insert( head2, 3 );
  insert( head2, 3 );
  insert( head2, 2 );
  insert( head2, 1 );
  std::cout << "List 2: ";
  printList(head2);
   if ( isPalindromeRecur(head2) ) {
    std::cout << "List 2 is pallindrome list\n";
  } else {
    std::cout << "List 2 is not a pallindrome list\n";
  }

}