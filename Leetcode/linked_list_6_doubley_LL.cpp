#include <iostream>
#include<bits/stdc++.h>
using namespace std;
	class Node{
		public:
	int data;						//node contain data + pointer to next data
		Node* next;
		Node* back;
	
		public:
	Node(int data1,Node* next1,Node* back1){		//initialize contructor
			data=data1;
			next=next1;
			back=back1;
		}
			public:
		Node(int data1){
			data=data1;
			next=nullptr;
			back=nullptr;
		}
		
	};
	
Node*conarrtodll(vector<int>&arr){
	Node* head=new Node(arr[0]);
	Node* prev=head;
	for(int i=1;i<arr.size();i++){
		Node*temp=new Node(arr[i],nullptr,prev);
		prev->next=temp;
		prev=temp;
	}return head;
}
Node* deletehead(Node* head){
	if(head==NULL || head->next==NULL){
		return NULL;
	}
	Node* prev=head;
	head=head->next;
	head->back=nullptr;
	prev->next=nullptr;
	delete prev;
	return head;
}
Node* deletetail(Node* head){
	if(head==NULL || head->next==NULL){
		return NULL;
	}
	Node* tail=head;
	while(tail->next!=nullptr){
		tail=tail->next;
	}
	Node* prev =tail->back;
	tail->back=nullptr;
	prev->next=nullptr;
	delete tail;
	return head;
}
Node* deletek(Node* head,int k){
	if(head==NULL){
		return NULL;
	}
	Node* temp=head;
	int cnt=0;
	
	while(temp!=NULL){
		cnt++;
		if(cnt==k){
			break;
		}
		temp=temp->next;
	}
	
	Node*prev=temp->back;
	Node*  front=temp->next;
	if(prev==NULL && front==NULL){
		return NULL;
	}
	else if(prev==NULL){//if k is 1
	Node* x=	deletehead(head);
	return x;
	}
	else if(front==NULL){//k is last node
		Node* y=deletetail(head);
		return y;
	}
	else{// k is some where between the nodes
	prev->next=front;
	
	front->back=prev;
	
	temp->next=nullptr;
	
	temp->back=nullptr;
	delete temp;
	return head;		
	}
}

	void deletenode(Node* temp){
		Node* prev =temp->back;
		Node* front=temp->next;
		
		if(front==NULL){
			prev->next=nullptr;
			temp->back=nullptr;
			free (temp);
			return ;		
		}
		prev->next=front;
		front->back=prev;
		
		temp->next=temp->back=nullptr;
		free (temp);
	}
	//### INSERTION
	Node* insertbeforehead(Node* head,int element){
		Node* newhead=new Node(element,head,nullptr);
		head->back=newhead;
		return newhead;
	}

Node* insertbeforetail(Node* head,int element){
	if(head==NULL){
		return insertbeforehead(head,element);
	}
	Node* tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
		Node* prev=tail->back;
		Node* newNode=new Node(element,tail,prev);
		prev->next=newNode;
		tail->back=newNode;
		return head;
	}
Node* insertbeforek(Node* head,int k,int value){
	
	if(k==1){
		return insertbeforehead(head,value);
	}
	
	int cnt=0;
	Node* temp=head;
	while(temp!=NULL){
		cnt++;
		if(cnt==k){
			break;
		}
		temp=temp->next;
	}
	Node* prev=temp->back;
	Node* newnode=new Node(value,temp,prev);
	
	temp->back=newnode;
	prev->next=newnode;
	return head;
	
	
}
void insertbeforeNode(Node* node,int val){
	
	Node* prev=node->back;
	Node* newnode=new Node(val,node,prev);
	
	prev->next=newnode;
	node->back=newnode;
	
}

	int main(){
	vector<int> arr={1,3,6,8};
	Node* head =conarrtodll(arr);
//	cout<<head->data;
 //head =deletehead(head);
 //head =deletetail(head);

//head=deletek(head,5);

//deletenode(head);// never ask to delete head node;
head=insertbeforehead(head,1111);
head=insertbeforetail(head,2222);
head=insertbeforek(head,6,777);
//insertbeforeNode(head->next->next,3);
Node*temp=head;

while(temp){
									//do not temper the head
		cout<<temp->data<< " ";
		temp=temp->next;
		
	}
	}
