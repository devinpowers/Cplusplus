/*
    Detect a Loop in a Linked list, Remove the "loop"
    Question Number 8 of linked lists in Crack the interview
*/


#include <iostream>
#include <string>

struct Node {
  int data;
  Node * next;
  Node( int d ) : data{ d }, next{ nullptr } { }
};


void insert( Node * & head, int data )
{
    // Insert into a circular linked list
  Node * newNode = new Node( data );
  if ( head == nullptr ) {
    head = newNode;
  } else {
    Node * temp = head;
    while( temp->next != nullptr ) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void printList( Node* head )
{
  while( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "NULL" << std::endl;
}


void removeLoop(Node* loopNode, Node* head){

    Node *ptr1 = head;
    Node *ptr2 = loopNode;

    std::cout << "ptr1->next: " << ptr1->next << std::endl;
      std::cout << "ptr1->next Value: " << ptr1->data << std::endl;



    std::cout << "loopNode:   " << loopNode->next << std::endl;
    std::cout << "loopNode Value:   " << loopNode->data << std::endl;


    while(ptr1->next != ptr2->next){

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr2->next = nullptr; // set to NULL
}

bool dectectAndRemoveCycle(Node* head){

    if (head == NULL){
        return false;
    }

    Node * fastPtr = head;
    Node * slowPtr = head;

    while (slowPtr && fastPtr && fastPtr->next){

        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;

        std::cout << "Current fastPtr is: " << fastPtr->next << std::endl;
        std::cout << "Current slowPtr is: " << slowPtr->next << std::endl;

        if (fastPtr == slowPtr)
        {
            removeLoop(slowPtr, head);
            return true;

        }
        // remove Loop function
       
    }
    return false;
}



int main()
{
    Node* head = nullptr;
    insert( head , 1 );
    insert( head , 2 );
    insert( head , 3 );
    insert( head , 4 );
    insert( head , 5 );
    std::cout << "Current List:\n";

    printList( head );

    
  
    std::cout << "Inserting loop, connecting 5 to 2..... \n";
    

    head->next->next->next->next->next = head->next; // connects 5 to 2 (address memory)

   // printList( head );

    
    
    std::cout << "Detecting and deleting loop\n";

    dectectAndRemoveCycle(head);


    std::cout << "Back to the same old list\n";

    printList( head );
    


  

}

