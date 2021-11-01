#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;


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





int maxPathSum(Node* root){
    int answer = INT_MIN;
    answer = max_path_sum_helper(root, answer);
    return answer;
}

void helper(Node* root, int sum_so_far, int &result){
    if(root == NULL)
        return;
    result = max(result, sum_so_far + root.val);
    helper(root.left , sum_so_far + root.val, result);
    helper(root.right, sum_so_far + root.val, result);
}

void max_path_sum_helper(Node* root, int &answer){
    if(root is NULL)
        return;
    left_result = INT_MIN;
    right_result = INT_MAX;
    // Find maximum path sum starting from root.left
    helper(root.left , 0, left_result );
    // Find maximum path sum starting from root.right
    helper(root.right, 0, right_result);
    left_result  = max(left_result , 0);
    right_result = max(right_result, 0);
    answer = max(left_result + right_result + root.val, answer);
    max_path_sum_helper(root.left, answer);
    max_path_sum_helper(root.right, answer);
}


int main() {

	Node* root = NULL;

	root = Insert(root,2); 
	root = Insert(root,1); 	
	root = Insert(root,4);
    root = Insert(root,3);
	root = Insert(root,5);




}

