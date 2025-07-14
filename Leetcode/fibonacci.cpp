class Solution {
    private:int fibo(vector<int>&v ,int n){
        if(n==0||n==1){
            return n;
        }

        if(v[n]!=-1){
            return v[n];
        }

        int a=fibo(v,n-1);
        int b=fibo(v,n-2);

        return a+b;
    }
public:
    int fib(int n) {
vector<int>v(n+1,-1);
        
return fibo(v,n);
    }
};
