#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;
#include<vector>
using std::vector;
#include <queue>
using std::queue;


struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(NULL), right(NULL) {}

};



/*
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
*/

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


Node* createMinimalBST(vector<int> arr, int low, int high)
{
    if (low > high) {
        return NULL;
    }
    int mid = (low + high) / 2;
    Node* node = new Node(arr[mid]);
    node->left = createMinimalBST(arr, low, mid - 1);
    node->right = createMinimalBST(arr, mid + 1, high);
    return node;
}

int main(){


 int A[] = {1, 2, 3, 4, 5, 6, 7, 19, 4, 2, 10, 9};

    vector<int> arr (A, A + sizeof(A) / sizeof(A[0]) );
    /*
        Convert List to BST {1,2,3,4,5,6,7}
                         4
                      /     \
                    2         6
                  /   \     /   \
                 1     3   5     7
    */
    Node *root = createMinimalBST(arr,  0,  11);


    //print
    printLevelOrder(root);
}
