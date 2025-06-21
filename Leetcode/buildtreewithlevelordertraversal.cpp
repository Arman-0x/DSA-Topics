#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}	
};

	node* buildTree(node* root){
		cout<<"Enter the data:"<<endl;
		int data;
		cin>>data;
		root=new node(data);
		
		if(data==-1){
			return NULL;
		}
		cout<<"enter data for inserting in left:"<<data<<endl;
		root->left=buildTree(root->left);
		
		cout<<"enter data for inserting in right:"<<data<<endl;
		root->right=buildTree(root->right);
		
		return root;
	}
	
	void levelordertraversal(node* root){
		queue<node*>q;
		
		q.push(root);
		q.push(NULL);//seperator
		
		while(!q.empty()){
			node* temp=q.front();	
			//cout<<temp->data<<" ";
			q.pop();
			
			if(temp==NULL){//previous level is complete travese is done
			cout<<endl;
			if(!q.empty()){//if queue still has some child nodes
				q.push(NULL);//seperator
			}
			}
			else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
				if(temp->right){
				q.push(temp->right);
			}
		 }
		}
		
	}
	
	buildtreefromLevelorder(node* & root){
		queue<node*>q;
		cout<<"Enter dta for root"<<endl;
		int data;
		cin>>data;
		root=new node(data);
		q.push(root);
		
		while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"Enter left node for:"<<temp->data<<endl;
		int leftdata;
		cin>>leftdata;
		
		if(leftdata!=-1){
			temp->left=new node(leftdata);
			q.push(temp->left);
			
		}
		cout<<"Enter right node for:"<<temp->data<<endl;
		int rightdata;
		cin>>rightdata;
		
		if(rightdata!=-1){
			temp->right=new node(rightdata);
			q.push(temp->right);
			
		}
		}
	}
		int main(){
		node* root =NULL;
		//creating the tree
		//root =buildTree(root);
	//	levelordertraversal(root);
		//reverselevelordertraversal(root);
		buildtreefromLevelorder(root);
		levelordertraversal(root);
		return 0;
	}
	
	
	
