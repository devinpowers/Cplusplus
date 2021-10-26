
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
    if (root == NULL)
	{	return;  } 

    queue<Node*> q;

 	int count_depth = -1;
    q.push(root);
		
    while (q.empty() == false) 
    {
        int NodeCount = q.size(); // Updates size after you put in childern nodes which is Equvilant to the "current level"/

		cout << "NodeCount (Size of the Queue) " << NodeCount << endl;

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
	cout << "Count number of depths: " << count_depth << endl;
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

