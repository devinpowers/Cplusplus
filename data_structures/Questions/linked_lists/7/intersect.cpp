/**
 * 
 * 
 * Find if two singly linked lists intersect
 * They intersect if a value has the same node address 
 * Its all about the ADDRESS
 * Return Node address if they intersect
**/


#include <iostream>
#include <stack>

struct Node {
  int data;
  Node * next;
  Node( int d ) : data{ d }, next{ nullptr } { } // Constructor
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

    std::cout << "Length of List 1: " << len1 << std::endl;
    std::cout << "Length of list 2: " << len2 << std::endl;
    // Find the bigger and smaller list

    Node* ptr1 = (len1 > len2) ? head1 : head2;
    Node* ptr2 = (len1 > len2 ) ? head2 : head1;

    std::cout << "Ptr1: " << ptr1->data << std::endl;
    std::cout << "Ptr2: " << ptr2->data << std::endl;

    int i = 0;

    while (i < std::abs(len1 - len2) && ptr1 ){

        // move pointer along linked list
        ptr1 = ptr1->next;

        std::cout << "i: " << i << std::endl;
        ++i;
    }

    // now we have equal nodes to travel on both the nodes so we can traverse and compare the pointers

    std::cout << "ptr spot: " << ptr1->data << std::endl;

    while(ptr1 && ptr2 ){
        // While True Traverse

        if (ptr1 == ptr2){
            // if eqaul address we found the intersection
            return ptr1;
    }
    // Else Move the Pointers along so we can compare
     std::cout << "ptr1 current: " << ptr1->data << std::endl;
    std::cout << "ptr2 current: " << ptr2->data << std::endl;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
   // std::cout << "ptr1 current: " << ptr1->data << std::endl;
    // std::cout << "ptr2 current: " << ptr2->data << std::endl;

    }

    return nullptr;

}

int main(){

    // Create Lists
  Node * list1 = new Node(3);
  list1->next = new Node(6);
  list1->next->next = new Node(9);
  list1->next->next->next = new Node(12);
  list1->next->next->next->next = new Node(15);
  list1->next->next->next->next->next = new Node(18);

  Node * list2 = new Node(7);
  list2->next = new Node(10);
  list2->next->next = list1->next->next->next;


  printList(list1);
  printList(list2);


  Node * intersectingNode = IntersectionPoint( list1 , list2 );

  if (intersectingNode) {

    std::cout << "Intersecting Node of lists is :" << intersectingNode->data << std::endl;

  } else {

    std::cout << "Lists do not interset" << std::endl;

  }

 
}