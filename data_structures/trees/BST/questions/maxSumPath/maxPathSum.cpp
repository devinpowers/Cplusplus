#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;
#include<math.h>

#include <queue>
using std::queue;

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


int findMaxUtil(Node* root, int &res){

	// Base Case 
	if (root == NULL){
		return 0;
	}

	int l = findMaxUtil(root->left, res);
	int r = findMaxUtil(root->right, res);

	// Max path 
	int max_single = fmax(fmax(0,r) + root->data, root->data );

	int max_top = fmax(max_single, 0 + r + root->data);

	res = fmax(res, max_top);
	
	return max_single;
}

int findMaxSum(Node* root){
	int res = INT_MIN;

	findMaxUtil(root, res);
	return res;
}



int main() {

	Node* root = NULL;

	root = Insert(root,20); 
	root = Insert(root,12); 	
	root = Insert(root,40);
    root = Insert(root,30);
	root = Insert(root,50);
	root = Insert(root,45);
	root = Insert(root,60);
	int num = 90;
	root = root->right->right->right = num;
	


	cout << findMaxSum(root) << endl;

}

