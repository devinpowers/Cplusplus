#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
#include<string.h>
// technically a null type for int variables, no higher values will be considered
const int null = 1000000001;
const int ninf = -1000000001;

using namespace std;

typedef struct Node{
	Node* parent;
	vector<int> keys;
	vector<Node*> pointer;
	// In case of a node split buffer contains the new node added
	Node* buffer;
	// deadKey flag indicator
	bool isDead;
	bool isLeaf;
}Node;

void debug(Node * root)
{
	for (int i = 0; i < root->keys.size(); ++i)
		cout << root->keys[i] << " ";
	cout << endl;
}

// Policy is newest smallest and incase it's not the newest then just smallest

Node* init_node(int n, bool leaFlag)
{
	Node* node = new Node;
	node->parent = NULL;
	node->keys = vector<int>(n, null);
	node->pointer = vector<Node*>(n+1);
	node->isLeaf = leaFlag;
	node->isDead = false;
	node->buffer = NULL;
	return node;
}

void unDead(Node* parent, Node* child, int value)
{
	if(parent != NULL)
	{
		bool flag = false;
		for (int i = 1; i < parent->pointer.size(); ++i)
		{
			if(parent->pointer[i] == child)
			{
				flag = true;
				parent->keys[i - 1] = value;
			}
		}
		if(parent->isDead && flag)
			unDead(parent->parent, parent, value);
	}
}

// This functions returns root, if a new root is created. Otherwise returns null. [See insert_val]
Node* insert(Node* node, int value)
{
	Node* root = NULL;
	int node_size = node->keys.size();
	bool full_flag = false;
	if(node->keys[node_size - 1] != null)
		full_flag = true;
	// The case where nodes are full
	if(full_flag)
	{
		vector<int> tempKeys = node->keys;
		vector<Node*> tempPointers = node->pointer;
		// Getting right place to insert the new key
		int tempIndex = upper_bound(tempKeys.begin(), tempKeys.end(), value) - tempKeys.begin();
		int ubp, newVal;
		tempKeys.insert(tempKeys.begin() + tempIndex, value);
		if(!node->isLeaf)
			tempPointers.insert(tempPointers.begin() + tempIndex + 1, node->buffer);
		Node* new_node = init_node(node_size, node->isLeaf);
		// Since both the nodes will have same parents
		new_node->parent = node->parent;
		if(node->isLeaf)
		{
			// Adjacent Leaf nodes should be connected to each other
			new_node->pointer[node_size] = node->pointer[node_size];
			node->pointer[node_size] = new_node;

			// Assigning the bound on number of pointers that a leaf node is supposed to have after split.
			double tempFloat = node_size + 1;
			ubp = (int)ceil(tempFloat/2);
		}
		else
		{
			// Assigning the bound on number of pointers that a node is supposed to have after split.
			double tempFloat = node_size + 2;
			ubp = (int)ceil((tempFloat)/2);

			// Distributing pointers among the nodes
			for (int i = 0; i < tempPointers.size(); ++i)
			{
				if(i < ubp)
					node->pointer[i] = tempPointers[i];
				else
				{
					new_node->pointer[i - ubp] = tempPointers[i];
					// All the children assigned to new_node should be updated about their new parent
					new_node->pointer[i - ubp]->parent = new_node;
					if(i <= node_size)
						node->pointer[i] = NULL;
				}
			}

			// One of the keys is deleted and passed to the node above [For Non-Leaf Case]
			ubp--;
			newVal = tempKeys[ubp];
			tempKeys.erase(tempKeys.begin() + ubp);
		}
		// Splits keys between both the nodes
		for (int i = 0; i < tempKeys.size(); ++i)
		{
			if(i < ubp)
				node->keys[i] = tempKeys[i];
			else
			{
				new_node->keys[i - ubp] = tempKeys[i];
				// Since a split is made, shifted keys are removed
				if(i < node_size)
					node->keys[i] = null;
			}
		}

		// If the node was dead and the value inserted "in it" is new then update the dead status
		if(node->isDead && value != node->keys[0] && tempIndex < ubp)
		{
			node->isDead = false;
			unDead(node->parent, node, value);
		}

		// Since node->keys[ubp - 1] is largest key in node, tempIndex will contain the index of smallest newest key
		tempIndex = upper_bound(new_node->keys.begin(), new_node->keys.end(), node->keys[ubp - 1]) - new_node->keys.begin();
		if(new_node->keys[tempIndex] == null)
		{
			// If all the values are same, tell parent to update the deadKey
			newVal = new_node->keys[0];
			new_node->isDead = true;
		}
		else if(node->isLeaf)
			newVal = new_node->keys[tempIndex];


		// Update parent about the new value inserted and in case there is not parent, create new root
		if(node->parent != NULL)
		{
			/* Buffer basically contains the new node to be added to parent.
			   It is maintained because there are chances that all pointers are assigned to some node or the other
			 */
			node->parent->buffer = new_node;
			root = insert(node->parent, newVal);
		}
		else
		{
			root = init_node(node_size, false);
			root->keys[0] = newVal;
			root->pointer[0] = node;
			root->pointer[1] = new_node;
			node->parent = root;
			new_node->parent = root;
		}
	}
	else
	{
		/*
		   There is no need to update the parent here because of our lookup design. Either if we are inserting the newest smallest then it
		   has to be the 0th index node because it won't contain pointer to this node and in other case we will insert something which
		   is bigger or equal to smallest newest. See design of lookup function.
		 */
		// Just insert the value and in case it's intermidiate node, insert pointer also.
		bool insert_flag = false;
		int tempKey = null;
		Node* tempPointer = NULL;
		for (int i = 0; i < node_size; i++)
		{
			if(insert_flag)
			{
				swap(node->keys[i], tempKey);
				if(!node->isLeaf)
					swap(node->pointer[i + 1], tempPointer);
			}
			else
			{
				if(value < node->keys[i] || node->keys[i] == null)
				{
					insert_flag = true;
					tempKey = node->keys[i];
					node->keys[i] = value;
					if(!node->isLeaf)
					{
						tempPointer = node->pointer[i + 1];
						node->pointer[i + 1] = node->buffer;
					}
				}
				if(value != node->keys[0] && node->isDead)
				{
					node->isDead = false;
					unDead(node->parent, node, value);
				}
			}
		}
	}
	return root;
}

Node* lookup(Node* node, int value, bool up)
{
	while(!node->isLeaf)
	{
		int lb = ninf, ub, node_size = node->keys.size(), index;
		for (int i = 0; i < node_size; i++)
		{
			if(node->keys[i] == null)
			{
				index = i;
				break;
			}
			ub = node->keys[i];
			if(lb <= value && value < ub)
			{
				index = i;
				break;
			}
			else if(lb <= value && value == ub && !up && node->pointer[i + 1]->isDead)
			{
				index = i;
				break;
			}
			else
				index = i + 1;
			lb = ub;
		}
		node = node->pointer[index];
	}
	return node;
}

Node* insert_val(Node* root, int value)
{
	Node* temp;
	temp = insert(lookup(root, value, true), value);
	if(temp != NULL)
		root = temp;
	return root;
}

bool find(Node* leaf, int val)
{
	for (int i = 0; i < leaf->keys.size(); ++i)
	{
		if(leaf->keys[i] == val)
			return true;
	}
	return false;
}

int count(Node* leaf, int val)
{
	int count = 0, flag = false, last_index = leaf->pointer.size() - 1;
	while(leaf != NULL)
	{
		for (int i = 0; i < leaf->keys.size(); ++i)
		{
			if(leaf->keys[i] == val)
				count++;
			else if(leaf->keys[i] > val && leaf->keys[i] != null)
			{
				flag = true;
				break;
			}
		}
		if(flag)
			break;
		leaf = leaf->pointer[last_index];
	}
	return count;
}

void range(Node* leaf, int lb, int ub)
{
	int count = 0, flag = false, last_index = leaf->pointer.size() - 1;
	while(leaf != NULL)
	{
		for (int i = 0; i < leaf->keys.size(); ++i)
		{
			if(leaf->keys[i] >= lb && leaf->keys[i] <= ub)
			{
				// cout << leaf->keys[i] << " ";
				count ++;
			}
			else if(leaf->keys[i] > ub && leaf->keys[i] != null)
			{
				flag = true;
				break;
			}
		}
		if(flag)
			break;
		leaf = leaf->pointer[last_index];
	}
	cout << count << endl;
	return;
}

void print_tree(Node* node)
{
	if(node == NULL)
		return;
	if(!node->isLeaf)
	{
		for (int i = 0; i < node->pointer.size(); ++i)
			print_tree(node->pointer[i]);
	}
	else
		cout << "L:";
	cout << "|";
	for (int i = 0; i < node->keys.size(); ++i)
	{
		if(node->keys[i] == null)
			cout << "n|";
		else
			cout << node->keys[i] << "|";
	}
	cout << endl;
}

void fileRead(int n, char const* fileName)
{
	Node* root = init_node(n, true);
	int value1, value2;
	string line;
	ifstream infile(fileName);
	while(getline(infile, line))
	{
		if(line.find("INSERT") != string::npos)
		{
			istringstream (line.substr(7)) >> value1;
			root = insert_val(root, value1);
		}
		else if(line.find("RANGE") != string::npos)
		{
			istringstream (line.substr(6)) >> value1 >> value2;
			range(lookup(root, value1, false), value1, value2);
		}
		else if(line.find("FIND") != string::npos)
		{
			istringstream (line.substr(5)) >> value1;
			if(find(lookup(root, value1, false), value1))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if(line.find("COUNT") != string::npos)
		{
			istringstream (line.substr(6)) >> value1;
			cout << count(lookup(root, value1, false), value1) << endl;
		}
		else
			cout << "Invalid Command : " << line;
	}
	// print_tree(root);

}

int main(int argc, char const *argv[])
{
	int n, B, M;
	char file_name[200];
	strcpy(file_name,argv[1]);

	//M=(long long) (argv[2]); //No use of this in code

	B=(long long) argv[2];

	n = (B - 1)/4;
	if(n < 2)
		n = 2;
	 fileRead(n, "new.txt");
	fileRead(n, file_name);
	return 0;
}