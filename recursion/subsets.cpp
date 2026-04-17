class Solution {
  public:
     vector<vector<int>> result;
     
     void solve(vector<int>& arr,vector<int>& curr,int idx){
         
         if(idx>=arr.size()){
             result.push_back(curr);
             return ;
         }
         
         curr.push_back(arr[idx]);// do
         solve(arr,curr,idx+1);//explore
         curr.pop_back();//backtrack or undo
         solve(arr,curr,idx+1);//explore another
         
         
         
         
     }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<int>curr;
        int idx=0;
        
        solve(arr,curr,idx);
        return result;
        
        
    }
};