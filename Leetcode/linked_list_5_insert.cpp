#include<iostream>
#include<bits\stdc++.h>
using namespace std;
	class Node{
		public:
	int data;						//node contain data + pointer to next data
		Node* next;
	
		public:
	Node(int data1,Node* next1){		//initialize contructor
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
		Node* head=new Node(arr[0]);		// 1-H   3   6   8 
		Node* mover=head;					////mover  temp
		
		for(int i=1;i<arr.size();i++){
		Node* temp =new Node(arr[i]);
		mover->next=temp;
		mover=temp;
		}return head;							
	}
	Node* insertathead(int data,Node* head){
		
		Node* temp=new Node(data,head);
		return temp;
	}
	Node* insertatlast(int data1,Node* head){
		if(head==NULL){
			return new Node(data1);
		}
		Node* temp=head;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
	temp->next=new Node(data1,nullptr);
		return head;
		
	}
	
	Node* insertatk(int el,Node* head,int k){
		if(head==NULL){
			if(k==1){
				return new Node(el);
			}else{
				return NULL;
				
				}
		}
		if(k==1){//insert at head if head is not null
		Node* temp =new Node(el,head);
		return temp;
			
		}
		
		int cnt=0;
		Node*temp=head;
		while(temp!=NULL){
			cnt++;
			if(cnt==k-1){
			Node* x=new Node(el);
			x->next=temp->next;
			temp->next=x;
			break;	
			}
			temp=temp->next;
		}return head;
		
	}
	Node* insertbeforeval(int el,Node* head,int val){
		if(head==NULL){
				return NULL;
				}

		if(head->data==val){//insert at head if head is not null
		Node* temp =new Node(el,head);
		return temp;
			
		}
		Node*temp=head;
		while(temp!=NULL){
			
			if(temp->next->data==val){
			Node* x=new Node(el);
			x->next=temp->next;
			temp->next=x;
			break;	
			}
			temp=temp->next;
		}return head;
		
	}
	
	int main(){	
vector<int> arr={1,3,6,8};
	Node* head =conarrtoll(arr);
//	cout<<head->data;

 

 head=insertathead(100,head);
head=insertatlast(101,head);
head=insertatk(500,head,5);
head=insertbeforeval(777,head,101);
Node*temp=head;
while(temp){
									//do not temper the head
		cout<<temp->data<< " ";
		temp=temp->next;
	
		
		
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
