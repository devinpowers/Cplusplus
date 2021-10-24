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


int FindMin(Node* root)
{
    // Iteratively
    if (root == NULL)
    {
        cout << "Error: Tree is Empty\n";
        return -1;
    }


   while (root->left != NULL){
       root = root->left;
   }
   return root->data;
}


int FindMax(Node* root)
{
        // Iteratively
    if (root == NULL)
    {
        cout << "Error: Tree is Empty\n";
        return -1;
    }


   while (root->right != NULL){
       root = root->right;
   }
   return root->data;
}

int FindMinRec(Node* root)
{    if (root == NULL)
    {   cout << "Error: Tree is Empty\n";
        return -1;
    }

    else if (root->left == NULL){
        return root->data;
   }
   return FindMinRec(root->left);
}

int FindMaxRec(Node* root)
{
	if (root == NULL)
	{
		cout << "Error: Tree is Empty\n";
		return -1;
	}
	else if (root->right == NULL){
		return root->data;
	}
	return FindMaxRec(root->right);
}


int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,8); 
	root = Insert(root,69); 
	root = Insert(root,420);
	root = Insert(root,5); 
	root = Insert(root,9); 
	root = Insert(root,4); 

	cout << "Inorder Traversal: " << endl;
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

	cout <<  "Lets find the Min of our Binary Tree: ";
	cout << FindMin(root) << endl;

    cout << "Lets find the Min of our Binary Tree Recursively: ";

    cout << FindMinRec(root) << endl;

    cout << "Lets find the Max of our Binary Tree: ";

    cout << FindMax(root) << endl;

	cout << "Find Max of our Binary Tree Recursively: " << FindMaxRec(root) << endl;
}

