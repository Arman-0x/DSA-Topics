// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>mat(n, vector<int>( n));
    // int mat[n][n];
    for(int i=0;i<n;i++){
      
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
        
    }
    
    for(int i=0;i<n;i++){
        mat[i][i]=arr[i];
    }
    int minsum=INT_MAX;
    for(int i=0;i<n;i++){
      int sum=0;
    for(int j=0;j<n;j++){
       sum+=mat[i][j];
    }
    if(sum<minsum){
        minsum=sum;
    }
        
    }
    
    cout<<minsum;
        
    

    return 0;
}