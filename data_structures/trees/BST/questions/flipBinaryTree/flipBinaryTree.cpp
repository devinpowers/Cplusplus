/*
    Invert/Flip/Mirror Binary Tree
    Common BST Coding Question
*/

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
	return root;  
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
        int NodeCount = q.size(); 

        while (NodeCount > 0){

            Node *Node = q.front(); 
			
            cout << Node->data << " "; 
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

    // Invert/Mirror Binary Tree.. Recursive Approach
    if (node == NULL){
        return;
    }
    else{

        invert(node->left);
        invert(node->right);
    
        Node* temp; 

        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}


int main() {

	Node* root = NULL;

	root = Insert(root,20); 
	root = Insert(root,12); 	
	root = Insert(root,40);
    root = Insert(root,35);
	root = Insert(root,52);
    root = Insert(root,48);
	root = Insert(root,60);

	cout << "Print Level Order for Tree 1 BEFORE Flipping/Inverting: ";
    cout << endl;
	printLevelOrder(root);

	cout << "Print Level Order for Tree 1 AFTER Flipping/Inverting: ";

    cout << endl;
    invert(root); // invert

    cout << endl;

    printLevelOrder(root);

	cout << endl;

}
