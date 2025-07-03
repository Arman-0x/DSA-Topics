#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	
	string s="i am the ironman";
	string ans="";
	stack<char>st;
	
	for(int i=0;i<s.size();i++){
	//	if(s[i]=""){
			//arr[i]=i;
	//	}
		st.push(s[i]);
		
	}
	
	while(!st.empty()){
		
	ans.push_back(st.top());
		st.pop();		
		
	}
	int i=0;
		while(i!=ans.size()){
		
cout<<ans[i];
		i++;
		
		
	}
}
