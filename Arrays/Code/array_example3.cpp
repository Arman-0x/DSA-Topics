#include<iostream>
using namespace std;

int binary(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	//int mid;
while(s<=e){
int mid;
mid=(e+s)/2;
	
	if(arr[mid]==key){
		return mid;
		
	}else if(arr[mid]>key){
		e=mid-1;
		
	}	else{
		s=mid+1;
	}
	
}
return -1;
}

int main(){
	
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;	
	cout<<binary(arr,n,key)<<endl;	
	return 0;
}