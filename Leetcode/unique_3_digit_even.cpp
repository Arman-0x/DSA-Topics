class Solution {
public:
    int ans;
    int n;
    unordered_set<string>st;
    void solve(vector<int>& digits, string  curr, vector<bool> & used){
        
        if(curr.size()==3 ){
            if ((curr[2] - '0') % 2 == 0)
                st.insert(curr);

            ans++;
            return ;
        }

        for(int i=0; i<n; i++){

                if(used[i]){
                    continue;
                }
                if(curr.size()==0 && digits[i]==0){
                    continue;
                }

                used[i]=true;//explore
                curr.push_back('0' + digits[i]);
                solve(digits,curr,used);

                curr.pop_back(); // backtrack
                used[i]=false;
        }
        return ;
    }
    int totalNumbers(vector<int>& digits) {
        // 100 to 999 
        //1 2 3 4  
        ans=0;

        n = digits.size();

        vector<bool> used(n,false);

        solve(digits,"",used);
        return st.size();
    }
};