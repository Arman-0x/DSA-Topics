#include<iostream>
using namespace std;
int main(){
	                             // To find min and max from array
	int n;
	cin>>n;
	int arr[n];
/*	int min= arr[0];
	int max=arr[0];*/
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	}
	int min= arr[0];
	int max=arr[0];
	
	for(int j=1;j<n;j++){
		
		if(arr[j]>max){
			
			max=arr[j];
			
		}
		 if(arr[j]<min){
			
			min=arr[j];
			
		}
		
		
		
	}
	
	cout<<"min: "<<min<<endl;
	cout<<"max: "<<max<<endl;

	
	
	//return 0;
}
