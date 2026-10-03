class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        int maxlen=0;

        for(int i=0;i<n;i++){

            sum+=nums[i];
            
            int rem = sum%k;

            if(mp.find(rem)!=mp.end() ){

                
                maxlen=max(maxlen, i-mp[rem]);
                if(maxlen>=2 ){return true;}
            
            }

            if(mp.find(rem)==mp.end()){
                mp[rem]=i;
            }
        }
        
        if(maxlen>2 ){
            return true;
        }
        return false;
    }
};