#include<iostream>
using std::cout;
using std::endl;
using std::cin;



struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

Node* Insert(Node *root,int data) {

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

// Returns true if given tree is BST.
bool isBST(Node* root, Node* l=NULL, Node* r=NULL)
{
    // Base condition
    if (root == NULL)
        return true;
 
    // if left node exist then check it has
    // correct data or not i.e. left node's data
    // should be less than root's data
    if (l != NULL and root->data <= l->data)
        return false;
 
    // if right node exist then check it has
    // correct data or not i.e. right node's data
    // should be greater than root's data
    if (r != NULL and root->data >= r->data)
        return false;
 
    // check recursively for every node.
    return isBST(root->left, l, root) and
           isBST(root->right, root, r);
}

void Inorder(Node *root) {
	if(root == NULL)
	{
		return;
	}  
	Inorder(root->left);          // Visit left subtree
	cout << root->data << endl;  // Print data
	Inorder(root->right);        // Visit right subtree
}
 

int main() {

	Node* root = NULL;

	root = Insert(root,10); 
	root = Insert(root,5); 
	root = Insert(root,16); 
	root = Insert(root,7); 
	root = Insert(root,4);
    root = Insert(root,40);



	cout << "Inorder Traversal: " << endl;
	Inorder(root);


	cout << "Is the Binary Tree a BST?  " << endl;

	if (isBST(root,NULL,NULL))

        cout << "Yes Is BST" << endl;
    else
        cout << "Not a BST" << endl;
 
}



