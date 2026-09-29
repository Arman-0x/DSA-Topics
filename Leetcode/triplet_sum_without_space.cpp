class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
    
        sort(arr.begin(), arr.end());
        
        int left;
        int right;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            
            left=i+1;
            right=n-1;
            
            while(left<right){
                
                int sum = arr[i]+arr[left]+arr[right];
                if(sum==target){
                    return true;
                }
                else if(sum>target){
                    right--;
                }
                else if(sum<target){
                    left++;
                }
            }
        }
        
        return false;
    }
};