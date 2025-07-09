#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int totalsum=0;	
for(int i=0;i<n;i++){
	totalsum+=arr[i];
	
}

int sum=0;
int tt=false;
for(int i=0;i<n;i++){
	sum+=arr[i];
	if(sum==totalsum){
	cout<<"index"<< i;	
	tt=true;}
	totalsum=totalsum-arr[i];

}
if(tt==false)
cout<<-1;


}
