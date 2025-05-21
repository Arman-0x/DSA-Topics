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
	
	Node* removek(Node* head,int k){
		if(head==NULL){
			return head;
		}
		if(k==1){
			Node* temp=head;
			head=head->next;
			free(temp);
			return head;
		}
		int cnt=1;
		Node* prev=NULL;
		Node* temp=head;
		while(temp!=NULL){;
			if(cnt ==k){
				prev->next=	prev->next->next;
				free(temp);
				break;
			}cnt++;
			prev=temp;
			temp=temp->next;
		}
		return head;
	}
	
	Node* removeel(Node* head,int el){
		if(head==NULL){
			return head;
		}
		if(head->data==el){
			Node* temp=head;
			head=head->next;
			free(temp);
			return head;
		}
	//	int cnt=1;
		Node* prev=NULL;
		Node* temp=head;
		while(temp!=NULL){;
			if(temp->data==el){
				prev->next=	prev->next->next;
				free(temp);
				break;
			}
			prev=temp;
			temp=temp->next;
		}
		return head;
	}
int main(){	
vector<int> arr={1,3,6,8};
	Node* head =conarrtoll(arr);
//	cout<<head->data;

 head=removek(head,4);

head=removeel(head,6);


Node*temp=head;
while(temp){
									//do not temper the head
		cout<<temp->data<< " ";
		temp=temp->next;
	
		
		
	}
	
}
