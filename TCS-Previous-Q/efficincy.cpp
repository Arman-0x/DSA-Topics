// 📝 Problem: Group Formation Based on Efficiency

// You are given an integer n representing the number of people and an array of n integers representing their efficiencies. You are also given an integer t, the size of each group.

// Your task is to:

// Form groups of size t after sorting the efficiencies in non-decreasing order.
// If n is not divisible by t, ignore the remaining people.
// For each group, calculate the difference between the maximum and minimum efficiency.
// Return the maximum difference among all groups.

// If the input is invalid (i.e., n <= 0 or t <= 0 or t > n), print:

// Invalid Input
// 📌 Input Format
// Integer n
// Array of n integers (efficiencies)
// Integer t
// 📌 Output Format
// Print the maximum difference among all groups
// Or "Invalid Input" if input is invalid

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    if(n<=0){
        cout<<"invalid input";
        return 0;
        
    }
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    if(t<=0||t>n){
          cout<<"invalid input";
          return 0;
    }
    
    //solution
    sort(arr, arr+n);
    int maxdiff=0;
    for(int i=0;i<n;i=i+t){
        if(i+t-1<n){
           maxdiff=  max(arr[i+t-1]-arr[i],maxdiff);
        }
        
    }
cout<<maxdiff;
    return 0;
}