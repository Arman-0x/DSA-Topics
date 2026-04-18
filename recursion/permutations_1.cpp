class Solution {
public:
    vector<vector<int>>result;
    unordered_set<int>st;
    void solve(vector<int>& nums,vector<int>& curr){
        if(curr.size()==nums.size()){
            result.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
        //when ever there is a question lie all possible combination, permutation , subsets we need to use back track and for looop 
        if(st.find(nums[i])==st.end()){
            st.insert(nums[i]);//insert
        curr.push_back(nums[i]);//do
        solve(nums,curr);//explore
        curr.pop_back();//backtrack
        st.erase(nums[i]);//remove
        }
        }

    }// o(n*n!) time complexity and o(n) space complexity  because at each position we have n choices and we are generating n! permutations and space complexity is o(n) because of 
    // the curr vector which can store at max n elements and the unordered set which can also store at max n elements
    vector<vector<int>> permute(vector<int>& nums) {

        vector<int>curr;

        solve(nums,curr);

        return result;
        
    }
};