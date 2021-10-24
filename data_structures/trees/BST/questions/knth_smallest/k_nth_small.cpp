
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


void nth_value(Node* root, int k){

	int count = 0;


	if (root == NULL){
		return;
	} 

	if (count <= k ){

		nth_value(root->left, k);
		count += 1;

		if (count == k){
			cout << root->data << " ";
			return; // Found our value
		}

		nth_value(root->right, k);
	}

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



int main() {

	Node* root = NULL;

	root = Insert(root,5); 
	root = Insert(root,3); 	
	root = Insert(root,8);
	root = Insert(root,4); 
	root = Insert(root,2);
	root = Insert(root,1); 

	root = Insert(root,7);
	root = Insert(root,10); 
    
	cout << "Print inorder: ";

	inorder(root);

	cout << endl;

	int k_nth = 2;

	cout << "k_nth value of: " << k_nth << " is: ";
	
	nth_value(root, k_nth);


	cout << endl;




}

