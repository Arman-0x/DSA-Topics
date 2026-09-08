class Solution {
public:
    const long long mod = 1e9 + 7;
    vector<int> prev;
    vector<int>dp;
    int solve(string s, int n){

        if(n==0){
            return 1;
        }

        if(dp[n]!=-1){

            return dp[n];
        }
       
        int total=2*solve(s,n-1);

        if(prev[n]!=0){
        int duplicate=solve(s, prev[n]-1);

        total = total-duplicate;
        }

        return dp[n] = (total+mod)%mod;
    }


    int distinctSubseqII(string s) {
        int n=s.size();
        vector<int>lastseen(26,0);
        
        dp.assign(2001,-1);
        prev.assign(n+1,0);

        for(int i=1;i<=n;i++){

            int idx = s[i-1]-'a';
            prev[i] = lastseen[idx];
            lastseen[idx] = i;

        }

        return ((solve(s,n)-1) + mod)%mod;
    }
};