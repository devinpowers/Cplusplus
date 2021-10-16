
#include<iostream>
using std::cout;
using std::endl;

struct Node{
    int data;
    Node* next;
};

void Insert( Node * &head, int x){

    Node*temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}


void print(Node * &head)
{
    Node* temp = head; // ADddre of the head node

    cout << "List is: ";
    while(temp != NULL){
        //iterate through
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}

void reverse(Node* &head){
    
   if (head == NULL){
       return; // Exit condition
   }
   // print the list after the head node
   reverse(head->next);
   cout << head->data << "->";
}

int main(){
    Node* head1 = NULL;
    
    Insert( head1, 1);
    Insert( head1, 2);
    Insert( head1, 4);
    Insert( head1, 3);
    Insert( head1, 9);

    print( head1);
    reverse(head1);
    
}