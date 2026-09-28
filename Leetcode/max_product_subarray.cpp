class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int currmaxprod=nums[0];
       int currminprod=nums[0];
       int ans=nums[0];

       for(int i=1;i<nums.size();i++){

        int num = nums[i];
        int oldmax = currmaxprod;
        int oldmin = currminprod;

        currmaxprod = max({num , num*oldmax, num*oldmin});
        
        currminprod = min({num, num*oldmax, num*oldmin});

        ans = max(ans,currmaxprod);
       }

       return ans;
    }
};