#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

#include "insert_binary.h"

int main(){

    Node* root = NULL;

    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 17);
    root = Insert(root, 5);

    root = Insert(root, 25);
    root = Insert(root, 3);
    root = Insert(root, 12);
    root = Insert(root, 45);

    // lets try and print the tree in InOrder 
    // left, root, right
    printLevelOrder(root);

    // Search for value

    cout << "Is the value in our BST???  " << boolalpha << Search(root, 20) << std::endl;

    cout << "___ " << endl;
}