class Solution {
  public:
    vector<vector<int>> ans;
    int n;
     vector<vector<int>> solve(vector<int>& arr, vector<int> curr,int i){
      if(i==n){
          ans.push_back(curr);
            return ans;
      }
      
      curr.push_back(arr[i]);
      
      solve(arr,curr,i+1);
      
      curr.pop_back();
      
      solve(arr,curr,i+1);
      
      return ans;
      
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        n=arr.size();
        vector<int>curr;
        return solve(arr,curr,0);
    }
};