#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	class Node{
		public:
			int data;
			Node* next;
			
			public:
	Node(int data1,Node* next1){
		data=data1;
		next=next1;
		
	}
	public:
	Node(int data1){
		data=data1;
		next=nullptr;
		
	}

	};



Node* conarrtoll(vector<int>&arr){
	Node* head =new Node(arr[0]);
		Node* mover=head;
	for(int i=1;i<arr.size();i++){
	
	Node* temp=new Node(arr[i]);
	
	mover->next=temp;
	mover=temp;
}return head;
}


Node* Removehead(Node* head){
	if(head==NULL){
		return head;
	}
	Node*temp=head;
	head=head->next;
	delete temp;
	return head;
}

Node* removetail(Node* head){
	if(head==NULL || head->next==NULL){
		return NULL;
	}
	Node*temp=head;
	while(temp->next->next!=nullptr){
		temp=temp->next;
		
	}
	delete temp->next;
	temp->next=nullptr;
	return head;
}

void print(Node* head){
	Node*temp=head;
	if(head==NULL){
		return ;
	}
	while(temp->next!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	

}

int main(){
	vector<int>arr={1,5,3,6};
	Node* head=conarrtoll(arr);
//	cout<<head->data;
	head=Removehead(head);
	//cout<<head->data;
	print(head);
	
	
}
