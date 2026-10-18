class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       
       int low = 0;
       int high =nums.size()-1;

       while(low<high){

        int mid = low + (high-low)/2;

        if(mid % 2 ==1){
            mid--; //start mid from correct position
        }
        if(nums[mid]==nums[mid+1]){
            low = mid + 2 ; // till now every left is at coorect position and are correct pair
        }else{
            high  = mid;
        }
       }
       return nums[low];
    }
};