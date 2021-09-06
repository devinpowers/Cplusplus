

/* C++ program to find Inorder successor in a BST */


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

	cout << "Current Root: " << root << endl;
	if(root == NULL) {
		cout << "Inserting New Node" << endl;
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


int main() {

	Node* root = NULL; // to store address of root Node

	root = Insert(root,15);
	cout << "Root: " << root << endl;
	root = Insert(root,10); 
	cout << "Root: " << root << endl;

	root = Insert(root,20);
	cout << "Root: " << root << endl;

	root = Insert(root,25); 
	root = Insert(root,8); 
	//cout << "Root: " << root << endl;

//	root = Insert(root,12); 

	//cout<<"Inorder Traversal: " << endl;
	Inorder(root);
	
	int number;
	cout << "Enter a number to be searched?\n";
	cin >> number;
	if (Search(root, number) == true)
	{
		cout << "Found!\n";
	}
	else{
		cout << "Not Found\n";
	}
}

 





