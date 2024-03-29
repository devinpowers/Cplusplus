
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
    cout << "using FindMin function " << endl;
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

	if(root == NULL){
        return NULL;
    } 
	else if(root->data == data){
        return root;
    } 
	else if(root->data < data) {
        return Find(root->right,data);
    }
	else{
        return Find(root->left,data);
    } 
}


Node* Getsuccessor( Node* root,int data) {
	// Search the Node - O(h)
	 Node* current = Find(root,data);

	if(current == NULL){
        // if Node isn't in BST
        cout << "ebd" << endl;
        return NULL;
    } 

    cout << "continue as node does exist in BST " << endl;

    // Case 1: Node has Right Subtree
	if(current->right != NULL) {  

        cout << "Case 1: " << endl;
		return FindMin(current->right); // O(h)
	}
    // Case 2: No Right subtree - O(h)
	else {   

        cout << "Case 2!" << endl;
		Node* successor = NULL;
		Node* ancestor = root;

        

		while(ancestor != current) {

            // print out the current acncestor
            cout << "ancestor: " << ancestor->data << endl;
            cout << "current: " << current->data << endl;
         //   cout << "successor: " << successor->data << endl;

			if(current->data < ancestor->data) {

                cout << "okokokokokokoko" << endl;

				successor = ancestor; // so far this is the deepest node for which current node is in left

				ancestor = ancestor->left;
			}

			else
            {
                cout << "move to the right " << endl;
                ancestor = ancestor->right;
            }
				
		}
		return successor;
	}
}


int main() {

	Node* root = NULL;

    /*

	root = Insert(root,15); 
	root = Insert(root,10); 	
	root = Insert(root,20);
	root = Insert(root,25); 
	root = Insert(root,8); 
	root = Insert(root,12); 
    root = Insert(root,18); 

	root = Insert(root,69); 

    */

	root = Insert(root, 15); 
    root = Insert(root, 10);
	root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 12); 	
    root = Insert(root ,8); 	
    root = Insert(root, 18);
    root = Insert(root, 69);
    root = Insert(root, 11);
    root = Insert(root, 13);


    printLevelOrder(root);


    /*
    Node* find = Find(root, 10);
    if (find == NULL){
        cout << "Not in Tree\n ";
    }
    else {
        cout << "Yes we found the value " << find->data << "\n";
    }
    */


    Node* successor = Getsuccessor(root,11);
	if(successor == NULL)
    {
        cout<<"No successor Found\n";

    } 
	else{
        cout<<"Successor is "<<successor->data<<"\n";
    }
    

}