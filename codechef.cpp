/*
#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int val){
		data = val;
		next = NULL;
	}
};

void insertathead(node* &head, int val){
	node* temp = new node(val);
	temp->next = head;
	head = temp;
} 

void insertattail(node* &head, int val){
	node* n = new node(val);
	node* temp=head;
	if(head==NULL){
		return insertathead(head,val);
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = n;
}

void insertatposition(node* &head,int val,int pos){
	node* n=new node(val);
	node* temp = head;
	if(pos == 0){
		return insertathead(head,val);
	}
	int counter=1;
	while(counter!=pos){
		temp=temp->next;
		counter++;
	}
	n->next =temp->next;
	temp->next = n;
}

void removefromhead(node* &head){
	node* todelete;
	todelete = head;
	head=head->next;
	delete todelete;	 
}

void removefromtail(node* &head){
	node* todelete;
	node* temp = head;
	while(temp->next->next!= NULL){
		temp=temp->next;
	}
	todelete =temp->next;
	temp->next=NULL;
}

void removedatanode(node* &head, int val){
	node* todelete;
	node* temp=head;
	if(head->data == val){
		return removefromhead(head);
	}
	while(temp->next->data!=val){
		temp=temp->next;
	}
	todelete = temp->next;
	temp->next=todelete->next;
	delete todelete;
}

void searchnode(node* head, int key){
	int counter = 1, flag=1;
	node* temp=head;
	while(temp != NULL){
		if(temp->data == key){
			flag = 0;
			cout<<"Found at position: "<<counter<<endl;
		}
		temp=temp->next;
		counter++;
	}
	if(flag)
		cout<<"element not found"<<endl;
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<"["<<temp->data<<"]"<<" -> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node* head = NULL;
	insertattail(head,100);
	insertattail(head,101);
	insertattail(head,102);
	display(head);
	insertathead(head,99);
	display(head);
	removefromhead(head);
	display(head);
	removefromtail(head);
	display(head);
	insertatposition(head,102,2);
	display(head);
	removedatanode(head,102);
	display(head);
	searchnode(head,102);
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
	node* prev;
	node(int val){
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void insertathead(node* &head, int val){
	node* n = new node(val);
	if(head!=NULL){
		head->prev=n;
		n->next=head;
	}
	head = n;
}

void insertattail(node* &head, int val){
	node* n = new node(val);
	node* temp=head;
	if(head==NULL)
		return insertathead(head,val);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void insertatposition(node* &head, int val,int pos){
	node* n=new node(val);
	node* temp = head;
	if(pos == 0){
		return insertathead(head,val);
	}
	int counter=1;
	while(counter!=pos){
		temp=temp->next;
		counter++;
	}
	if(temp->next!=NULL){
	n->next = temp->next;
	temp->next->prev=n;
}
	temp->next=n;
	n->prev=temp;

}

void deletefromhead(node* &head){
	node* todelete;
	todelete = head;
	if(head->next==NULL){
		head=NULL;
		return;
	}
	head=head->next;
	head->prev = NULL;
	delete todelete;
}

void deletefromtail(node* &head){
	node* todelete;
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	todelete = temp;
	temp->prev->next=NULL;
	delete todelete;
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<"["<<temp->data<<"]"<<" -> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}


int main(){
	node* head = NULL;
	cout<<"Indexing starts from zero"<<endl;
	cout<<"`````````````````````````"<<endl;
	display(head);
	insertattail(head,4);
	display(head);
	insertathead(head,2);
	display(head);
	insertathead(head,1);
	display(head);
	insertattail(head,5);
	display(head);
	insertattail(head,6);
	display(head);
	insertatposition(head,3,2);
	display(head);
	deletefromhead(head);
	display(head);
	deletefromtail(head);
	display(head);
	return 0;
}
