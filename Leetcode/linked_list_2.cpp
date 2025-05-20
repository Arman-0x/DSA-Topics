#include <iostream>
#include<bits/stdc++.h>
using namespace std;
	struct Node{
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
		Node* temp =new Node(arr[1]);
		mover->next=temp;
		mover=temp;
		
		}return head;
											
	}
	

int main(){
	vector<int> arr={1,3,6,8};
	Node* head =conarrtoll(arr);
//	cout<<head->data;
Node*temp=head;
while(temp){
									//do not temper the head
		cout<<temp->data<< " ";
		temp=temp->next;
	
		
		
	}
	
	
}
