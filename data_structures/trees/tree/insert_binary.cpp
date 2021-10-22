#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

#include <queue>
using std::queue;


struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* Insert(Node* root, int data){

    if (root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL; // Set both left and right addresses to NULL
    }
    else if (data <= root->data){
        root->left= Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(Node* root, int data){

    if (root == NULL){
        return false;
    }
    else if (root->data == data){
        return true;
    }
    else if (data <= root->data){
        return Search(root->left, data);
    }
    else {

        return Search(root->right, data);
    }

}



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


void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    } 
    queue<Node*> q; // Queue to hold values

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

int main(){

    Node* root = NULL;

    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 17);
    root = Insert(root, 5);

    root = Insert(root, 25);
    root = Insert(root, 3);
    root = Insert(root, 12);
    root = Insert(root, 45);

    // lets try and print the tree in InOrder 
    // left, root, right
    printLevelOrder(root);

    // Search for value

    cout << "Is the value in our BST???  " << boolalpha << Search(root, 20) << std::endl;
}