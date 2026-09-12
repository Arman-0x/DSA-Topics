class Solution {
  public:
    vector<vector<int>>result;
    vector<bool>used;
        void solve(vector<int> &arr ,vector<int> curr, int target, int start){

            if(target==0 ){
                result.push_back(curr);
                return ;
            }

            if(target<0){
                return ;
            }


            for(int i=start;i<arr.size();i++){

                if(i>0 && arr[i]==arr[i-1] && !used[i-1]){
                    continue;
                }
                used[i]=true;
                curr.push_back(arr[i]);

                solve(arr,curr,target-arr[i], i+1);

                curr.pop_back();
                used[i]=false;




            }

            return ;
        }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        vector<int> curr;
        sort(arr.begin(), arr.end());
        used.assign(arr.size(),false);
        solve(arr,curr,target,0);
        
        return result;
        
    }
};