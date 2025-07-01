#include<iostream>
//fifo
using namespace std;

class Queue{
public:
int *arr;
int front;
int rear;
int size;

public:
	Queue(){
		size=1000001;
		arr=new int[size];
		front=0;
		rear=0;
	}


bool isEmpty(){
	if(front==rear){
		return true;
		
	}else{
		return false;
		
	}
}

int qsize(){
	return size;
}

void enqueue(int data){
	if(rear==size){
		cout<<"cannot enqueue ,full"<<endl;
		
	}else{
		arr[rear]=data;
		rear++;
	}
}

void dequeue(){
	if(front==rear){
		cout<<"no element present in the queue"<<endl;
	}else{
		int ans=arr[front];
		front++;
	
		if(front==rear){
			rear=0;
			front =0;
		}	cout<<"dequed"<<ans<<endl;
		
	}
}
void qfront(){
	if(front==rear){
		cout<<"no front is present "<<endl;
	}else{
		cout<<arr[front]<<endl;
	}
}
};
int main(){
	
	Queue q;
	q.enqueue(25);
	q.enqueue(5);
	q.enqueue(2);
	q.qfront();
	
q.dequeue();
cout<<q.isEmpty()<<endl;

cout<<q.qsize();

	
	
}
