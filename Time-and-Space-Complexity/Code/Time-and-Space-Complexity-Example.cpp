#include<iostream>
using namespace std;
int main(){
int n,m ;
cin>>n>>m;
int a=0;                           //In this case time complexity is O(m+n)

for(int i=1;i<=n;i++){
a=a+1;

}for(int j=1;j<=m;j++){
    a=a+1;
}
cout<<a;
return 0;

}
