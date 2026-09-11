#include<iostream>
#include<set>

using namespace std;

void solve(string curr, set<string> &st,int n,int k){
    
    if(curr.size() == k){
        st.insert(curr);
        return;
    }
    

    for(int i=1;i<=n;i++){

        curr.push_back('0'+i);
        solve(curr,st,n,k);
        curr.pop_back();
       

    }
}
int main(){
    int n,k;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter k"<<endl;
    cin>>k;
    set<string>st;
    int i=0;
    solve("",st,n,k);
    for(auto it: st){
        cout<<it<<endl;
    }
    //return st.size();
}
