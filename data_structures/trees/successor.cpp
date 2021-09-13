
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
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node *temp =root;
            root = root->left;
            delete temp;
        }
        else{
            // Case 3: 2 childern
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right  = Delete(root->right, temp->data);
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


//Function to find some data in the tree
Node* Find(Node*root, int data) {
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
}


Node* Getsuccessor(struct Node* root,int data) {
	// Search the Node - O(h)
	struct Node* current = Find(root,data);
	if(current == NULL) return NULL;
	if(current->right != NULL) {  //Case 1: Node has right subtree
		return FindMin(current->right); // O(h)
	}
	else {   //Case 2: No right subtree  - O(h)
		struct Node* successor = NULL;
		struct Node* ancestor = root;
		while(ancestor != current) {
			if(current->data < ancestor->data) {
				successor = ancestor; // so far this is the deepest node for which current node is in left
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
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
	root = Insert(root,69); 

	cout << "Before Deleting Any Nodes: " << endl;
   	printLevelOrder(root);

    // Now lets delete!!!!
    cout << "Deleting Node with one Child (25): " << endl;
    root = Delete(root, 25);
   	printLevelOrder(root);
    cout << endl;

    // Delete Leaf Node with One On
    cout << "Delete Node Leaf Node (deleting 69) " << endl;

	// root = deleteNode(root, 69);
   	printLevelOrder(root);
    cout << endl;

    cout << "Delete Node with two Childern (Deleting 10): " << endl;
    //Delete Node with two childern
   //  root = deleteNode(root, 10);
   	printLevelOrder(root);
    cout << endl;

    Node* successor = Getsuccessor(root,1);
	if(successor == NULL)
    {
        cout<<"No successor Found\n";

    } 
	else{
        cout<<"Successor is "<<successor->data<<"\n";
    }
    

}