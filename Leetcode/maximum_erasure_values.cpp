class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     
     int l=0,r=0,sum=0;
     int maxsum=INT_MIN;
unordered_set<int>seen;
     while(r<nums.size() ){

        while (seen.find(nums[r]) != seen.end()) {
                seen.erase(nums[l]);//if seen shrink the window until the duplicate is remove 
                sum -= nums[l];
                l++;
            }
          seen.insert(nums[r]);//put the value in set
            sum += nums[r];
            maxsum = max(maxsum, sum);//upd maxsum
            r++;
     }
    return  maxsum;
    }
};
