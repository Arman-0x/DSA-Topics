class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        unordered_map<int,int>mp;
        
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        
        for(int i=0;i<n;i++){
            
            
            for(int j=i+1;j<n;j++){
                //arr[i]+arr[j]+arr[k]==target
               int temp= target - (arr[j]+arr[i]);
               
               if(mp.find(temp)!= mp.end() && mp[temp]!=i && mp[temp]!=j){
                   return true;
               }
                
            }
        }
        return false;
    }
};