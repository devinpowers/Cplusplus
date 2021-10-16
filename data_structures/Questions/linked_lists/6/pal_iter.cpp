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

bool isPalindrome( Node *head){

    // iterative solution

    if (head == NULL || head->next == NULL){
        return true;
    }


    // Find the Middle NOde
    Node* ptr1 = head;
    Node* ptr2 = head;

    Node * middleNode = NULL;

    while (ptr1 && ptr2 && ptr1->next ) {
        // while true, basically untill last value we should move ptr1 ahead two times so ptr2 is in the middle
        ptr1 = ptr1->next->next;
        ptr2 = ptr2->next;
    }

    // Watch out for odd numbers 
    // in case skip middle node
    if (ptr1 && ptr1->next == NULL){
        ptr2 = ptr2->next;
    }
    // Reverse second half of the linked list, pass address of ptr2 to reverse
    reverse(ptr2);

    middleNode = ptr2;

    // Lets now compare the two halves
    ptr1 = head; // Start of our orginal linked list again

    while (ptr1 && ptr2 && ptr1->data == ptr2->data ){
        // While we move move through the first half the linked list (ptr) and the second half (ptr2) we check 
        // if the data values match
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // reverse linked list again
    reverse(middleNode);

    // Check if ptr2 is
    if ( ptr2 == NULL ) {
         return true;
    } 
    else {
        return false;
    }

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

    if ( isPalindrome(head1) ) {
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
   if ( isPalindrome(head2) ) {
    std::cout << "List 2 is pallindrome list\n";
  } else {
    std::cout << "List 2 is not a pallindrome list\n";
  }

}