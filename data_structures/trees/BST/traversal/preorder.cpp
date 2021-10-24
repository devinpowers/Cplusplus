
#include<iostream>
using std::cout;
using std::endl;

#include <queue>
using std::queue;


struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

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


void preorder(Node* root)
{
    if (root == NULL )
    {
        return;
    }
    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    if (root == NULL )
    {
        return;
    }
    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}


void postorder(Node* root)
{
    if (root == NULL )
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,23); 
	root = Insert(root,7); 
	root = Insert(root,13);
	root = Insert(root,14);
	root = Insert(root,11);

    cout << "Preorder: ";
   	preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;
}
