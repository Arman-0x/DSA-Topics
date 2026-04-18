class Solution {
public:
    vector<vector<int>>result;
    // unordered_set<int>st;
    void solve(int idx, vector<int>& nums){
        if(idx==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);// do
       
        solve(idx+1,nums);//explore
         swap(nums[i],nums[idx]);//back track
        
        }
        }
    vector<vector<int>> permute(vector<int>& nums) {

        //vector<int>curr;

        solve(0,nums);

        return result;
        
    }
};