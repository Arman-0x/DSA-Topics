class Solution {
public:
    //unordered_map<string,int>mp;
    vector<vector<int>>dp;
    int solve(int i,int j, string s, string t){
        if(j==t.size()){//1 subsequence found 
            return 1;
        }
        if(i==s.size() && j!=t.size()){
            return 0;//i out of bound but not j means ans not possible
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int total=0;
        if(s[i]==t[j]){//if match 
            total+= solve(i+1, j+1, s, t);
        }
        int total2=solve(i+1, j, s, t);
        return dp[i][j] = total+total2;
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        dp.assign(n+1,vector<int>(m+1,-1));
        
        return solve(0,0,s,t);

       
         
    }
};