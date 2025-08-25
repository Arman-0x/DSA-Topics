class Solution {
    public int longestSubarray(int[] nums) {
        Map<Integer,Integer> mp= new HashMap<>();

    int left=0;
    int right=0;
    int n=nums.length;
    int maxlen=0;
        while(right<n){
            if(nums[right]==0 && mp.containsKey(nums[right])){
                left=mp.get(nums[right])+1;
              //  mp.remove(0);
            }
            if(nums[right]==0){
                mp.put(0,right);
                
            }
            maxlen=Math.max(maxlen,right-left+1);
            right++;
        }
        return maxlen-1;
    }
}