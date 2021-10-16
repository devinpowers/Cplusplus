/*

  Problem 1: Linked Lists
  Sum up elements in a linked list recusively and iteratively
*/


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

void print(Node* &head){

    Node * temp = head;
    cout << "List is: ";
    while (temp != NULL){

        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;

}

int Sum(Node *head){
    // Recursive
    if (head != NULL){
        return head->data + Sum(head->next);
    }
    else{
        return 0;
    }
   
}

int SumIter(Node *head){
 //sum up values in linked list
 // iterative solution
    int sum = 0;
    while (head != NULL){
        sum+= head->data;
        head = head->next;
    }
    return sum;
}


int main(){

    Node* head = NULL;

    for (int i = 0; i < 10; i++){
        Insert(head, i);
    }
    Insert(head, 3);
    Insert(head, 6);
    Insert(head, 8);
    Insert(head, 1);


    print(head);
    // Call Sum and print
    cout << "Sum Recusive: ";
    cout << Sum(head) << endl;

    cout << "Sum Recusive: ";
    cout << SumIter(head) << endl;
}