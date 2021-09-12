
#include<iostream>
using std::cout;
using std::endl;
using std::cin;


struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

//Function to visit nodes in Inorder and print
void Inorder(Node *root) {
	if(root == NULL)
	{
		return;
	}  
	Inorder(root->left);          // Visit left subtree
	cout << root->data << endl;  // Print data
	Inorder(root->right);        // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,int data) {
	// Return pointer which is a memory address

	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	
	else if(data <= root->data)
	{	
		root->left = Insert(root->left,data);
	}
	else 
	{
		root->right = Insert(root->right,data);
	}
	
	return root;  // Return Root Address
}

/*
int FindHeight(Node* root)
{
    if (root == NULL)
    {
        return -1; // Return Minus One because height of a leaf node is 0
    }

	int leftheight = FindHeight(root->left);
	int rightheight = FindHeight(root->right);
	
    return std::max(leftheight,rightheight) + 1;
}
*/


int FindHeight(Node* root)
{
    if (root == NULL)
    {
        return -1;
    }
    return std::max(FindHeight(root->left), FindHeight(root->right)) + 1;
}


int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,17);

	root = Insert(root,12); 
    root = Insert(root,8); 
	root = Insert(root,5);
    root = Insert(root,2); 

	cout << "Inorder Traversal: " << endl;
	Inorder(root);
	
    int height;

    height = FindHeight(root);

    cout << "Height of Binary Tree: " << height << endl;
}

