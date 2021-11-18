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
Node* partition( Node *head, int x)
{
    /* Let us initialize start and tail nodes of
    new list */
     Node *tail = head;
 
    // Now iterate original list and connect nodes
    Node *curr = head;
    while (curr != NULL)
    {
         Node *next = curr->next;
        if (curr->data < x)
        {
            /* Insert node at head. */
            curr->next = head;
            head = curr;
        }
 
        else // Append to the list of greater values
        {
            /* Insert node at tail. */
            tail->next = curr;
            tail = curr;
        }
        curr = next;
    }
    tail->next = NULL;
 
    // The head has changed, so we need
    // to return it to the user.
    return head;
}


int main() {
  Node * head = nullptr;
  insert(head, 10);
    insert(head, 3);

  insert(head, 10);
    insert(head, 4);

  insert(head, 3);
  insert(head, 20);

  
  std::cout << "List before partition around 3\n";
  printList(head);

  partition(head, 3);

  std::cout << "List after partition around 3:\n";
printList(head);


}