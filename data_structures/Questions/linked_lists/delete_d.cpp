#include <iostream>
#include <unordered_map>
#include <random>

using namespace std;

struct Node {
	int data = 0;
	Node * next = nullptr;
};

/**
 * [insert - insert a node at the head of list]
 * @param head [head of the list]
 * @param data [new node's data]
 */
void insert( Node * & head, int data )
{
	Node * newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

/**
 * [printList Helper routine to print list]
 * @param head [head of the list]
 */
void printList( Node * head ) {
	while( head ) {
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "nullptr" << std::endl;
}

/**
 * [removeDuplicates Remove duplicates without using extra space]
 * @param head [head of list]
 */
void removeDuplicates( Node * head ) {
	if ( head == nullptr || ( head && (head->next == nullptr))) {
		return;
	}
	Node * curr = head;
	while(curr) {
		Node * runner = curr;
		while (runner->next != nullptr) {
			if (runner->next->data == curr->data) {
				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}


int main(){



}

