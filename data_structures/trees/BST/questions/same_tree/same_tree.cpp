/*
	Same Tree Function

	Pass in two trees (root1 and root2) and check if they're the same tree
	Return True or False
*/



#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;


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


/*
	To Find out if both trees are the same we will loop through this shit and 



*/

bool sameTree(Node* root1, Node* root2){

	// Pass in two address of trees
	// 
	if (root1 == NULL && root2 == NULL ){
		cout << "EXITING " << endl;
		return true; // 
	}

	else if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)){
		cout << "SUPE" << endl;
		return false;
	}
	else{
		

		return root1->data == root2->data && sameTree(root1->left, root2->left) && sameTree(root1->right, root2->right);
	}
}


int main() {

	Node* root = NULL;

	root = Insert(root,1); 
	root = Insert(root,2); 	
	root = Insert(root,3);
	root = Insert(root,5);
	root = Insert(root,8);


	cout << "Print inorder for Tree 1: ";
	inorder(root);

	cout << endl;


	Node* root2 = NULL;

	root2 = Insert(root2,1); 
	root2 = Insert(root2,2); 	
	root2 = Insert(root2,3);
	root2 = Insert(root2,5);
	root2 = Insert(root2,8);


	cout << "Print inorder for Tree 2: ";
	inorder(root2);

	cout << endl;	
	
	cout << "Same Tree?: " << boolalpha << sameTree(root, root2) << endl;


}

