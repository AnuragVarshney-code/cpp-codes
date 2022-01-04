#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *next;
	node(int value){
		data = value;
		next = NULL;
	}
};

void insertAtTail(node* &head, int val){
	node* n = new node(val);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = n;
}

void insertAtHead(node* &head, int val){
	node* n = new node(val);
	n->next=head;
	head=n;
}

void insertAtPosition(node* &head, int val, int pos){
	node* n = new node(val);
	if(pos == 1){
		n->next=head;
		head=n;
		return;
	}
	node* temp = head; 
	int counter = 1;
	while(counter < pos-1){
		temp = temp -> next;
		counter++;
	}
	n -> next = temp -> next;
	temp -> next = n;
}

void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp -> data<<"->";
		temp = temp -> next;
	}
	cout<<"NULL"<<endl;
}

void deleteVal(node* &head, int val){
	node* temp = head;
	if(head ==  NULL){
		return;
	}
	if(head->data == val){
		node* todelete = head;
		head = head -> next;
		delete todelete;
		return;
	}
	while(temp -> next -> data != val){
		if(temp ->next -> next == NULL){
			cout<<"Not Found\n";
			return;
		}
		temp = temp -> next;
	}
	node* todelete = temp -> next;
	temp -> next = temp -> next -> next;
	delete todelete;
}

void search(node* head, int key){
	int counter=0;
	while(head -> data != key){
		if(head->next == NULL){
			cout<<"Not Found\n";
			return;
		}
		head = head -> next;
		counter++;
	}

	cout<<counter+1<<endl;
}

int main(){
	node* head = NULL;
	insertAtHead(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	insertAtHead(head,0);
	display(head);
	insertAtPosition(head,5,6);
	display(head);
	insertAtPosition(head,6,4);
	display(head);
	deleteVal(head,6);
	display(head);
	deleteVal(head,7);
	display(head);
	search(head, 1);
	return 0;
}