/**
 * 
 * 
 * Given two (singly) linked lists, find if two linked lists intersect and return the intersecting node.
 * They intersect if a value has the same node address 
 * Its all about the ADDRESS
 * Return Node address if they intersect
**/


#include <iostream>

struct Node {
  int data;
  Node * next;
  Node( int d ) : data{ d }, next{ nullptr } { }
};



void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}

int listlength(Node* head){
    // return the length of the list passed in
    int count = 0;
    while (head){
        count += 1;
        // Update head to next
        head = head->next;
    }
    return count;
}

Node * IntersectionPoint(Node* head1, Node* head2){
    // find length of both linked lists
    int len1 = listlength(head1);
    int len2 = listlength(head2);

    // Find the bigger and smaller list set bigger list to ptr1 and smaller to ptr2

    Node* ptr1 = (len1 > len2) ? head1 : head2;
    Node* ptr2 = (len1 > len2 ) ? head2 : head1;

    // Possibly adjust ptr1 if list 1 is longer than list 2
    int i = 0;
    while (i < std::abs(len1 - len2) && ptr1 ){
        ptr1 = ptr1->next;
        ++i;
    }

    // Traverse over the two lists using ptr1 and ptr2 and compare their address to see if they intersect
    while(ptr1 && ptr2 ){
        
        if (ptr1 == ptr2){
            
            return ptr1; // if eqaul address we found the intersection
    }
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
    }

    return NULL;
}

int main(){

  Node * list1 = new Node(1);
  list1->next = new Node(2);
  list1->next->next = new Node(3);
  list1->next->next->next = new Node(9);
  list1->next->next->next->next = new Node(3);
  list1->next->next->next->next->next = new Node(2);
  
  // List Two
  Node * list2 = new Node(12);
  list2->next = new Node(8);
  list2->next = new Node(19);

  list2->next->next = list1->next->next->next;


  std::cout << "List 1: ";

  printList(list1);
  std::cout << "List 2: ";
  printList(list2);
  
  Node * intersectingNode = IntersectionPoint( list1 , list2 );  // Here we have a return type Node

  if (intersectingNode) {
  
    
    std::cout << "Intersecting Node of lists is : " << intersectingNode->data << std::endl;
  } else {

    std::cout << "Lists do not interset" << std::endl;
  }
}




