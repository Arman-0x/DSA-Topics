#include<iostream>

using namespace std;

int main(){
	int maxi=0;
	int secmaxi=0;
	int n=5;
	int nums[n]={5,6,1,3,67};
  for(int i=0;i<5;i++){

            if(nums[i]>maxi){
                secmaxi=maxi;
                maxi=nums[i];

            }else if(nums[i]>secmaxi && nums[i]<maxi){
secmaxi=nums[i];
            }
}
	cout<<"max product:"<<secmaxi*maxi;
	
	
}
