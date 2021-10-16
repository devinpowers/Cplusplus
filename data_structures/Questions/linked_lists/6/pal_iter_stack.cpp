#include <iostream>
#include <stack>

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

bool isPalindrome( Node * head ) {
    // Use Stack to Check
  // if list is empty or just contains one node.
  if ( head == nullptr || head->next == nullptr ) {
    return true;
  }

  Node * ptr1 = head;
  Node * ptr2 = head;

  //pushing the first half of list to stack.
  std::stack<Node*> nodeStack;

  while( ptr2 && ptr1 && ptr1->next ) {
    ptr1 = ptr1->next->next;
    nodeStack.push(ptr2);
    ptr2 = ptr2->next;
  }

  //in case of odd number of nodes, skip the middle one
  if ( ptr1 && ptr1->next == nullptr ) {
    ptr2 = ptr2->next;
  }
  // Now compare the other half of the list with nodes
  // we just pushed in stack

  while(!nodeStack.empty() && ptr2) {

      // pop and remove from stack and 
      // compare with the second half of the linked list
    Node * curr = nodeStack.top();
    std::cout << "Current: " << curr->data << std::endl;
    nodeStack.pop();
    if (curr->data != ptr2->data) {
      return false;
    }
    ptr2 = ptr2->next;
  }

  return true;
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
    std::cout << "List 1 is NOT a pallindrome list\n";
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
    std::cout << "List 2 is NOT a pallindrome list\n";
  }

}