
#include<iostream>
using std::cout;
using std::endl;
using std::cin;


#include "delete_node.h"

int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,8); 
	root = Insert(root,12); 
	root = Insert(root,69); 
	root = Insert(root,420); 
    root = Insert(root,5); 
	root = Insert(root,13); 
    root = Insert(root,17); 

	cout << "Before Deleting Any Nodes: " << endl;
   	printLevelOrder(root);

    // Now lets delete!!!!
    cout << "Deleting Node with one Child (25): " << endl;
    root = deleteNode(root, 25);
   	printLevelOrder(root);
    cout << endl;

    // Delete Leaf Node with One On
    cout << "Delete Node Leaf Node (deleting 69) " << endl;

	root = deleteNode(root, 69);
   	printLevelOrder(root);
    cout << endl;

    cout << "Delete Node with two Childern (Deleting 10): " << endl;
    //Delete Node with two childern
    root = deleteNode(root, 10);
   	printLevelOrder(root);
    cout << endl;

}
