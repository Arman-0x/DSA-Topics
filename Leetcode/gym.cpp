/*
You decided to go to the gym. You currently have E units of energy.

There are N types of exercises in the gym.
Each exercise drains Ai units of energy from your body.

You feel tired if your energy becomes 0 or less.

You can do each unique exercise at most 2 times, because other people also need to use the machines.

Your task is to determine the minimum number of exercises (including repetitions) you must perform to become tired (energy = 0).

If it's not possible to get tired using the exercises within the allowed limits, return -1.

?? Input:
An integer E — total energy you start with.

An integer N — number of different exercises.

An array A of size N — energy drained by each exercise when performed once.

?? Output:
A single integer — minimum number of exercises to perform to reduce energy to = 0, or -1 if not possible.


*/
#include<iostream>
#include<algorithm>
#include <iterator> 
using namespace std;

int gym(int e,int n,int arr[],int x,int i,int c,int count){
	
	if(e<0){
		return 	gym(x,n,arr,x,i+1,0,count=count-1);

	}
	else if(c==2  && e!=0){
	return	gym(e,n,arr,x,i+1,0,count);
		
	}else if(e==0){
		return count;
	}
	else if(i>=n && e!=0){
		return -1;
	}
	
	count++;
	 x=e;

return 	gym(e-arr[i],n,arr,x,i,c+1,count);
	

	
}

int main(){
	
	/*100000
5
10000 20000 30000 40000 50000*/
	int E=10;
	int N=2;
	int x=E;
	int a[N]={1,2};
	
 sort(a, a + N, greater<int>());
cout<<	gym(E,N,a,x,0,0,0);
	
	
}
