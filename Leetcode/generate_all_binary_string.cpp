class Solution {
  public:
    vector<string> ans;
    void solve(int n, string curr){
        
        if(curr.size()==n){
            ans.push_back(curr);
            return ;
        }
        
        curr.push_back('0');//take 0 and try 
        solve(n,curr);
        curr.pop_back();//backtrack
        curr.push_back('1');//explore more with 1
        solve(n,curr);
        
        return;
    }
    vector<string> binstr(int n) {
        // code here
        
        solve(n,"");
        
        return ans;
    }
};