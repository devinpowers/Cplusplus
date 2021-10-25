
#include<iostream>
using std::cout;
using std::endl;

#include <queue>
using std::queue;

// Linked List implementation
struct NodeLink{
	int data;
	Node* next;
};

Node* head = NULL; // Global Variable, can be accessed anywhere

void Insert_Link(int x)
{
    Node* temp = new Node(); 
    temp->data = x;  
    temp->next = head; // Setting Next pointer to Current Head 

    head = temp;
}


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


int main(){


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
        { // Go level by level 
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
}