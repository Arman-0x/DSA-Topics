//tree
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
void reverselevelordertraversal(node* root){
    if (!root) return;

    queue<node*> q;
    stack<node*> s;

    q.push(root);
    q.push(NULL); // Level separator

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        s.push(temp);

        if (temp == NULL) {
            if (!q.empty()) {
                q.push(NULL);  // Add level separator for next level
            }
        } else {
            // Push right before left so that left comes first when stack is reversed
            if (temp->right) q.push(temp->right);
            if (temp->left) q.push(temp->left);
        }
    }

    // Now print from stack
    while (!s.empty()) {
        node* temp = s.top();
        s.pop();

        if (temp == NULL) {
            cout << endl;
        } else {
            cout << temp->data << " ";
        }
    }
}



	int main(){
		node* root =NULL;
		//creating the tree
		root =buildTree(root);
	//	levelordertraversal(root);
		reverselevelordertraversal(root);
		return 0;
	}
