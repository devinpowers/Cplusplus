#include <iostream>
#include <cmath>

struct Node {
  int data;
  Node * next;
  Node ( int d ) : data{ d }, next{ nullptr } { }
};

/**
 * [insert - insert a new node at head of the list]
 * @param head [head of the list]
 * @param data [new node's data]
 */
void insert( Node * & head, int data ) {
  Node * newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

/**
 * [printList - print the list]
 * @param head [head of the list]
 */
void printList( Node * head ) {
  while ( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}


Node * add_iterative( Node * list1, Node * list2 ){

    // First Create a new list 

    Node * list = nullptr;
    Node * currentNode = list;

    int sum = 0;        // Will hold the value pf adding nodes 
    int carry = 0; // Will hold any number that'll need to be carried over to the next node

    // Create while loop to check nodes and their values!

    while (list1 != NULL || list2 != NULL || sum > 0){
        //..
        if (list1 != NULL){
            sum += list1->data;
            list1 = list1->next;
        }
        if (list2 != NULL){
            sum += list2->data;
            list2 = list2->next;
        }
        carry = std::floor(sum/10);
        sum = sum % 10;

        currentNode->next = Node(sum);
        currentNode = currentNode->next;
        
        sum = carry;
        carry = 0;

    }


    return list->next;

}

int main(){

    //making list 1 for number 617
    Node * list1 = nullptr;
    insert(list1, 6);
    insert(list1, 1);
    insert(list1, 7);
    std::cout << "List1:  ";
    printList(list1);

    //making list2 for number 295
    Node * list2 = nullptr;
    insert(list2, 2);
    insert(list2, 9);
    insert(list2, 5);
    std::cout << "List2:  ";
    printList(list2);

    Node * list3 = add_iterative(list1, list2);
    std::cout << "Iterative Solution: \n";
    std::cout << "List3:  ";
    printList(list3);


}