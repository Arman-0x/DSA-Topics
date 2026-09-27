class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int totalSum=0;

        for(auto it : nums){
            totalSum += it;
        }

        totalSum -= x;

        int n=nums.size();
        int length=0;
        int maxlen=-1;
        int sum=0;
        int left=0;
        int i;
        for(i=0; i<n;i++){
            
            sum+= nums[i];


             
            while(left<=i && sum>totalSum ){
                sum -= nums[left];
                left++;
            }

             if(sum==totalSum){
                length=i-left+1;

                maxlen=max(length,maxlen);
            }

            
           

        }
        
        
        if(maxlen==-1){
            return -1;
        }

        return n-maxlen;
    }
};
