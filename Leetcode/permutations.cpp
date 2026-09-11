#include<set>
class Solution {
public:
    set<vector<int>> st;
    void solve(vector<int>& nums, int n, vector<int>& curr, vector<bool> & vis){

        if(curr.size()==n){
            st.insert(curr);
            return ;
        }

        for(int i=0;i<n;i++){
            if(vis[i]){
                continue;
            }
            vis[i]=true;
            curr.push_back(nums[i]);
            solve(nums, n, curr, vis);
            curr.pop_back();
            vis[i]=false;
        }

        return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>curr;
        vector<bool>vis(n,false);
        solve(nums, n, curr, vis);

        vector<vector<int>>ans;

        for(auto it: st){
            ans.push_back(it);
        }
        return ans;

    }
};
