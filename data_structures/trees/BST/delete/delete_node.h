
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

// print InOrder
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



Node* minValueNode(Node* node)
{
    Node* current = node;
 
    //  loop down to find the leftmost leaf 
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}




Node* deleteNode(Node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted is
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL and root->right==NULL)
            return NULL;
       
        // node with only one child or no child
        else if (root->left == NULL) {
             Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->data = temp->data;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}





void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    } 
    queue<Node*> q;

    q.push(root);
    
    while (q.empty() == false) 
    {
        int NodeCount = q.size();

        while (NodeCount > 0)
        {
            Node *Node = q.front();
            cout << Node->data << " ";
            q.pop();
            if (Node->left != NULL)
                q.push(Node->left);
            if (Node->right != NULL)
                q.push(Node->right);
            NodeCount--;
        }
        cout << endl;
    }
}


