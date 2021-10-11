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
void delete_at(Node* &head, char n)
{
    Node* temp1 = head;  // Point to first element in the linked list
    
    if (n == 1)
    {
        head = temp1->next; 
        delete(temp1); 
        return; 
    }



    for (int i = 0; i < n-2; i++ )
    {
        temp1 = temp1->next;
    }
    // Loop 
    Node* temp2 = temp1->next; // nth Node

    temp1->next = temp2->next; // (n+1)th Node


    delete(temp2); // Delete temp2

}

void printList( Node * head ) {
  while(head) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "null" << std::endl;
}

int main() {

  Node * head = nullptr; 
  insert(head, 'a');
  insert(head, 'b');
  insert(head, 'c');
  insert(head, 'd');
  insert(head, 'e');




  std::cout << "List Before Deleting Node 1 " <<  std::endl;
  printList(head);

  delete_at(head,1);
  std::cout << std::endl;

  std::cout << "List after Deleting Node 1 (e is deleted)" << std::endl;
  printList(head);


  delete_at(head,3);
std::cout << std::endl;


  std::cout << "List after deleting Node in 3rd Position (b is deleted) " << std::endl;

  printList(head);
}
