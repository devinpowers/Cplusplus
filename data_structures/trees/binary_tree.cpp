

/* C++ program to find Inorder successor in a BST */


#include<iostream>
using std::cout;
using std::endl;


struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

//Function to visit nodes in Inorder and print
void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	cout << root->data << endl; //Print data
	Inorder(root->right);      // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,int data) 

	
	cout << "Current Root: " << root << endl;
	if(root == NULL) {
		cout << "Inserting New Node" << endl;
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

/*
bool Search(Node* root, int data)
{
	if (root == NULL )
	{
		return false;
	}
	else if ( root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return Search(root->left, data);
	}
	else return Search(root->right, data);
}
*/

int main() {

	Node* root = NULL; // to store address of root Node

	root = Insert(root,15);
	root = Insert(root, 10); 
	// root = Insert(root,10);
	// root = Insert(root,3); 
	// root = Insert(root,4); 
	//root = Insert(root,1); 
	//root = Insert(root,11);

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: " << endl;
	Inorder(root);
	
	

}

