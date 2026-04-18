class Solution {
public:
     vector<vector<int>> result;
    void solve(vector<int>& nums, vector<int>& curr,int idx){
        if(idx == nums.size()){
            result.push_back(curr);
            return;
        }

        curr.push_back(nums[idx]);//do
        solve(nums,curr,idx+1);//explore
        curr.pop_back();//undo
        //then check if there is duplicate then skip it 
        idx=idx+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        solve(nums,curr,idx);//explore after skipping duplicates

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        int idx=0;
        sort(begin(nums),end(nums));

        solve(nums, curr, 0);
        return result;
    }
};