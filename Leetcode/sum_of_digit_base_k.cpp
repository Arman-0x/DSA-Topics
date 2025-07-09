class Solution {
public:
    int sumBase(int n, int k) {
string s="";
      while(n>0){
s=to_string(n%k)+s;
n/=k;
      }
      int x=stoi(s);  
int sum=0;
      while(x>0){
      sum+=  x%10;
      x=x/10;
      }return sum;
    }
};
