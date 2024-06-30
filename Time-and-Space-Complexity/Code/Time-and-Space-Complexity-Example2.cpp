#include<iostream>
using namespace std;
int main(){
int n,m ;
cin>>n>>m;
int a=0;                           //In this case time complexity is O(m*n)

for(int i=1;i<=n;i++){


for(int j=1;j<=m;j++){
    a=a+rand();
}
}
cout<<a;
return 0;

}
