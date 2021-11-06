
#include <iostream>

struct Node{
    char data;
    Node* next;
};

void insert( Node * &head, char data){

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

void delete_at(Node* &head, int n)
{
    Node* temp1 = head;

    if (n == 1)
    {
        head = temp1->next; // head now points to second node
        delete(temp1); // Remove memory From HEAP
        return; // after we execute
    }


    for (int i = 0; i < n-2; i++ )
    {
        temp1 = temp1->next;
    }
   

    std::cout << std::endl;
    Node* temp2 = temp1->next; // nth Node
    temp1->next = temp2->next; // (n+1)th Node
    delete(temp2); // Delete temp2

}

void printList( Node * head ) {
  while(head) {
    std::cout << head->data << "-->";
    head = head->next; // update to next node in list
  }
  std::cout << "null" << std::endl;
}

int main() {

  Node * head = nullptr; 
  
  insert(head, 'a');
  insert(head, 'b');
  insert(head, 'c');
  insert(head, 'd');


  std::cout << "List: ";
  printList(head);

  std::cout << "Delete at the 3rd position" << std::endl;

  delete_at(head,3);

  std::cout << "List: " << std::endl;
  printList(head);
}


