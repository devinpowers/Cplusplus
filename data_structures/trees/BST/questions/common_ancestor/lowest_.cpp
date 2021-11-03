/*  https://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/

Lowest Common ancestor in a BST

*/

#include<iostream>
using std::cout;
using std::endl;


struct Node {

	int data;
	struct Node *left;
	struct Node *right;
};

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


Node* lca(Node* root, int n1, int n2)
{
    // Return the Node* to the  Lowest Common Ancestor of n1 and n2

    if (root == NULL) 
    { // BST doesn't exist
        return NULL;
    }

    // If both n1 and n2 are smmaller than the root, the lowest common ancestor lies to the left, so recusive call to the left-subtree
    if (root->data > n1 && root->data > n2)
    {        
        return lca(root->left, n1, n2);
    }
 
    // If both n1 and n2 are greater than the root, then LCA lies in the right, so recusive call to the right-subtree
    if (root->data < n1 && root->data < n2)
    {
        return lca(root->right, n1, n2);
    }

    return root; // Return root of LCA 
}
 

int main() {

	Node* root = NULL;

	root = Insert(root,20); 
	root = Insert(root,12); 	
	root = Insert(root,55);
    root = Insert(root,8);
	root = Insert(root,15);
    root = Insert(root,36);
	root = Insert(root,75);
    root = Insert(root,69);
	root = Insert(root,90);

    int n1 = 8, n2 = 15;
    Node *t = lca(root, n1, n2);
    cout << endl;
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

    int n3 = 36, n4 = 75;
    Node *t2 = lca(root, n3, n4);
    cout << endl;
    cout << "LCA of " << n3 << " and " << n4 << " is " << t2->data << endl;


    int n5 = 69, n6 = 90;
    Node *t3 = lca(root, n5, n6);
    cout << endl;
    cout << "LCA of " << n5 << " and " << n6 << " is " << t3->data << endl;
    cout << endl;
}

