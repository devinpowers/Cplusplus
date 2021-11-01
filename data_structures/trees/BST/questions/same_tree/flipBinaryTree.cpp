
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

void printLevelOrder(Node *root)
{
    if (root == NULL)
	{	return;  } 

    queue<Node*> q;

 	int count_depth = -1;
    q.push(root);
		
    while (q.empty() == false) 
    {
        int NodeCount = q.size(); // Updates size after you put in childern nodes which is Equvilant to the "current level"/


        while (NodeCount > 0)
        { // Go level by level 

            Node *Node = q.front(); 
			
            cout << Node->data << " "; // print out the front node in the Queue
            q.pop();
            if (Node->left != NULL)
			{
				q.push(Node->left);
			}
            if (Node->right != NULL)
			{
				q.push(Node->right);
			}
                
           	NodeCount--;

        }
		count_depth++;
        cout << endl;
    }
}

void invert(Node* node){

    if (node == NULL){
        return;
    }
    else{

        Node* temp;
        // Recusieve calls
        invert(node->left);
        invert(node->right);

        // Swap pointers in this node
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}


int main() {

	Node* root = NULL;

	root = Insert(root,2); 
	root = Insert(root,1); 	
	root = Insert(root,4);
    root = Insert(root,3);
	root = Insert(root,5);


	cout << "Print Level Order for Tree 1 before flipping: ";
    cout << endl;
	printLevelOrder(root);

	cout << "Print Level Order for Tree 1 AFTER flipping: ";

    invert(root);
    cout << endl;

    printLevelOrder(root);

	cout << endl;

}
