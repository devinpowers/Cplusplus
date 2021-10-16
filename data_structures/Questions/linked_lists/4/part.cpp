

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


 /* We start with a new list. Elements bigger than the pivot element are put at the tail list
 and elements smaller are put at the head list*/

Node * partition( Node * listhead , int x ) {
   Node * head = nullptr;
   Node * headInitial = nullptr;   /*The initial node of list head*/
   Node * tail = nullptr;
   Node * tailInitial = nullptr;   /*The initial node of list tail*/
   Node * curr = listhead;
   while( curr != nullptr ) {
     Node * nextNode = curr->next;
     if ( curr->data < x ) {
            if (head == nullptr) {
                head = curr;
                headInitial = head;
            }
       //insert curr node to head list
       head->next = curr;
       head = curr;
     } else {
            if (tail == nullptr) {
                tail = curr;
                tailInitial = tail;
            }
       // insert curr node to tail list
       tail->next = curr;
       tail = curr;
     }
     curr = nextNode;
   }
   head->next = tailInitial;  /*Now, we connect the head list to tail list.*/
   tail->next = nullptr;
   return headInitial;
}



int main() {
  Node * head = nullptr;
  insert(head, 1);
  insert(head, 2);
  insert(head, 10);
  insert(head, 5);
  insert(head, 8);
  // insert(head, 5);
  insert(head, 4);
  
  std::cout << "List before partition around 4:\n";
  printList(head);
  std::cout << "List after partition around 4:\n";
  printList(partition(head, 2));

}
