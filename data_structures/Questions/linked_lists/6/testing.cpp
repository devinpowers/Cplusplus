#include <iostream>
#include <stack>

using namespace std;

struct Node {
  char data;
  Node * next;
  Node ( char c ) : data{ c }, next{ nullptr } { }
};


void insert( Node * & head, char c ) {
  Node * newNode = new Node(c);
  newNode->next = head;
  head = newNode;
}


void printList( Node * head ) {
  while( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}


bool isPalin(Node* head){
    
    Node* head2 = head;

    stack <int> s;

    while(head2 != NULL){

            s.push(head2->data);
            head2 = head2->next;
    }

    while(head != NULL ){
        
        int i=s.top();
        s.pop();

        if(head -> data != i){
            return false;
        }
    head = head->next;
    }
 
    return true;
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
  if ( isPalin(head1) ) {
    std::cout << "List 1 is pallindrome list\n";
  } else {
    std::cout << "List 1 is not a pallindrome list\n";
  }

  std::cout << std::endl;

    Node * head2 = nullptr;
  insert( head2, 'r');
  insert( head2, 'a');
  insert( head2, 'd');
  insert( head2, 'a');
  insert( head2, 'r');
  insert( head2, 'e');
 
  printList(head2);
  if ( isPalin(head2) ) {
    std::cout << "List 2 is pallindrome list\n";
  } else {
    std::cout << "List 2 is NOT a pallindrome list\n";
  }

    cout << endl;

}

