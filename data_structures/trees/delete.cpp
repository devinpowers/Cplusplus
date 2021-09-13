
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

Node* FindMin(Node* root)
{
   Node* current = root;
   
   while (current && current->left != NULL){
       current = current->left;
   }
   return current;
}

Node* FindMax(Node* root)
{
   Node* current = root;
   
   while (current && current->right != NULL){
       current = current->right;
   }
   return current;
}

Node* Delete(Node *root, int data){
    if (root == NULL)
    {
        return root;
    }
    else if(data < root->data)
    {
        root->left = Delete(root->left,data);
    }
    else if(data > root->data){
        root->right = Delete(root->right,data);
    }

    
    else{

        if (root->left == NULL && root->right == NULL) {
            // Case 1: No Child
            delete root;
            root = NULL;
        }
        // Case 2: One Child
        else if(root->left == NULL){
            cout << "One Child: " <<  root->data << endl;
            Node *temp = root;
            root = root->right;

            cout << "WHAT HAPPENS??: " <<  root->data << endl;
            //cout << ": " << root->right->data << endl;

            delete temp;
        }
        else if(root->right == NULL){
            Node *temp =root;
            root = root->left;
            delete temp;
        }
        else{
            // Case 3: 2 childern (Finding Min Value in Right-Subtree)
           // Node *temp = FindMin(root->right);
            // root->data = temp->data;
            // root->right  = Delete(root->right, temp->data);

        }


             // Case 3: 2 childern Alternative Way (Finding Max vale in Left-Subtree !)
            Node *temp = FindMax(root->left);
            root->data = temp->data;
            root->left  = Delete(root->left, temp->data);
        }
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

int main() {

	Node* root = NULL;

	root = Insert(root,12); 
	root = Insert(root,15); 	
	root = Insert(root,5);
	root = Insert(root,3); 
	root = Insert(root,7); 
	root = Insert(root,9); 
	root = Insert(root,1); 
	root = Insert(root,13); 
	root = Insert(root,17);
	root = Insert(root,19); 

	cout << "Before Deleting Any Nodes: " << endl;
   	printLevelOrder(root);

    // Delete Leaf Node with One On
    cout << "Delete Node Leaf Node (deleting 18) " << endl;

	root = Delete(root, 1);
   	printLevelOrder(root);
    cout << endl;

      // Now lets delete!!!!
    cout << "Deleting Node with one Child (7): " << endl;
    root = Delete(root, 7);
   	printLevelOrder(root);
    cout << endl;

    
    cout << "Delete Node with two Childern (Deleting 15): " << endl;
    //Delete Node with two childern
    root = Delete(root, 15);
   	printLevelOrder(root);
    cout << endl;

}

