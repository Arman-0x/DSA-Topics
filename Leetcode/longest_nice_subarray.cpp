class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
       int bitused=0;
       int l=0,maxlength=0;

        for(int r=0;r<nums.size();r++){

            while((bitused & nums[r])!=0){// if the bitused till now not give 0 with nums[r] shrink window
              
                bitused ^= nums[l];//remove bits of l in bitused
                l++;
            }

            bitused|=nums[r]; // keep track of all bits 1 in window 
            maxlength=max(r-l+1,maxlength);

        }
        return maxlength;

        
    }
};
