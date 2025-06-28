class Solution {
    private:
   int lcs(string &a,string &b,int n,int m, vector<vector<int>> &dp){

    if(n==0 || m==0){//base case
        return 0;
    }
if(dp[n][m]!=-1){

    return dp[n][m];
}

    if(a[n-1]==b[m-1]){//if match
    return dp[n][m]  =  1+lcs(a,b,n-1,m-1,dp);
    }
    else{//if not match
return dp[n][m]=max(lcs(a,b,n,m-1,dp),lcs(a,b,n-1,m,dp));
    }

   }
public:
    int longestCommonSubsequence(string a, string b) {
     int n=a.size();
     int m=b.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
   int result=lcs(a,b,n,m,dp);
return result;

    }
};
