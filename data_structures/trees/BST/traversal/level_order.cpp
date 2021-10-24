
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

int main() {

	Node* root = NULL;

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,17); 
	root = Insert(root,25); 
	root = Insert(root,19); 
	root = Insert(root,18); 
	root = Insert(root,7); 
	root = Insert(root,14);
	root = Insert(root,5);
	root = Insert(root,9);

   	printLevelOrder(root);
}

