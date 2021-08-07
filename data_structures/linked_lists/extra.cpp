#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};


Node* head=NULL;


// void getNode
void insertNode(int data,int pos){

    
	Node* temp=new Node();
	Node* temp2=head;
	temp->data=data;
	if(pos==1){
		temp->next=head;
		head=temp;
		return;
	}
	for(int i=1;i<pos-1;i++){
		temp2=temp2->next;	
	}

	temp->next=temp2->next;
	temp2->next=temp;

}

void deleteNodeByPos(int pos){
	Node* temp=head;
	Node* temp2=NULL;
	if(pos==1){
		head=temp->next;
		delete(temp);
		return;
	}	
	for(int i=1;i<pos-1;i++){
		temp=temp->next;
	}
	temp2=temp->next;
	temp->next=temp->next->next;
	delete(temp2);
}

int searchNode(int data){
	Node* temp=head;
	int pos=1;
	while(temp!=NULL){
		
		if(temp->data==data){
			return pos;
		}
		temp=temp->next;
		pos++;
	}
	return 0;
}

void reverseLinkedList(){
	Node* cur=head;
	Node* prev=NULL;
	Node* next;

	while(cur!=NULL){
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}

	head=prev;

}

void printReverseLinkedList(Node* temp){
	if(temp->next==NULL){
		cout<<temp->data<<"->";
		return;
	}
	printReverseLinkedList(temp->next);
	cout<<temp->data<<"->";
}

void reverseLinkedListRecursive(Node* temp){
	if(temp->next==NULL){
		head=temp;
		return;
	}
	reverseLinkedListRecursive(temp->next);
	temp->next->next=temp;
	temp->next=NULL;
}



void printLinkedList(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<< endl;
}

int main(){
	head=NULL;
	insertNode(1,1);
	insertNode(4,2);
	insertNode(5,1);
	insertNode(6,2);
	insertNode(3,3);
	printLinkedList();
	deleteNodeByPos(1);
	printLinkedList();
	cout<<searchNode(6)<<endl;	
	printReverseLinkedList(head);
	reverseLinkedListRecursive(head);
	cout<<endl;
	printLinkedList();
	return 0;
}
