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


int main(){
	int arr[5]={8,9,0,6,7};
	Node* temp=new Node(arr[0],nullptr);	//	Node* means pointer to next location
	cout<<temp->data;
}
