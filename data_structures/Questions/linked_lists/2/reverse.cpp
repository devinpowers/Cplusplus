
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


void deleteList( Node * & head ) {
  Node * nextNode;
  while(head) {
    nextNode = head->next;
    delete(head);
    head = nextNode;
  }
}

void printList( Node * head ) {
  while(head) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "null" << std::endl;
}

void Reverse(Node* head){

    if (head == NULL){
       
        return NULL; // Exit Conditions
    }
    if (head->next == NULL) {
        head = head; // FIX
        return head;
    }

    Node * node1 = Reverse(head->next);
    node1->next = head;
    head->next = NULL;
    return head;
}




int main() {

  Node * head = nullptr; 

  for ( int i = 9; i > 0; i-- ) {
    insert(head, i);
  }

  std::cout << "List: ";
  printList(head);
  // reverse recursively
  Reverse(head);
    std::cout << "List: ";
  printList(head);

}