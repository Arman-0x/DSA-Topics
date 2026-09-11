


#include<string>
class Solution {
public:
    vector<string> ans;
    void solve(int n, string curr){
        if(curr.size()==n){
            ans.push_back(curr);
            return ;
        }

         curr.push_back('1');//always anytime can add 1
        solve(n, curr);
        curr.pop_back();

        // We can add 0 only if previous character is not 0
        if (curr.empty() || curr.back() != '0') {
            curr.push_back('0');
            solve(n, curr);
            curr.pop_back();
        }

        return ;
    }
    vector<string> validStrings(int n) {
        string curr="";

        solve(n,curr);

        return ans;
    }
};