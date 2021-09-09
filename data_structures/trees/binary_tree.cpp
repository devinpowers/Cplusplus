

/* C++ program to find Inorder successor in a BST */


#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include <queue>
using std::queue;


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

void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL) return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false)
    {
        // nodeCount (queue size) indicates number
        // of nodes at current level.
        int nodeCount = q.size();
 
        // Dequeue all nodes of current level and
        // Enqueue all nodes of next level
        while (nodeCount > 0)
        {
            Node *Node = q.front();
            cout << Node->data << " ";
            q.pop();
            if (Node->left != NULL)
                q.push(Node->left);
            if (Node->right != NULL)
                q.push(Node->right);
            nodeCount--;
        }
        cout << endl;
    }
}

int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
 

int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,8); 
	root = Insert(root,12); 

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

	cout << "print level order traversal: " << endl;

	printLevelOrder(root);


	int height;
	height = maxDepth(root);

	cout << "The Height of the Binary Tree is: " << height << endl;
}




 




