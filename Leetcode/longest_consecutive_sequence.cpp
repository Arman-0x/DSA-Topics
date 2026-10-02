class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_set<int> st;

        
        int current;
        int longest=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto num:st){

            if(st.find(num-1)==st.end()){
                current=num;
                int length=1;

                while(st.find(current+1)!=st.end()){
                    length++;
                    current++;
                }

                 longest = max(length,longest);
            }

           
        }

        return longest;


    }
};