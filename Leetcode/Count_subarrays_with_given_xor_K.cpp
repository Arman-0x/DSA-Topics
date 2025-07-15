class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
      unordered_map<int, int> freq;
        int count = 0;
        int xr = 0;

        for (int i = 0; i < nums.size(); i++) {
            xr ^= nums[i];

            if (xr == k) count++;

            int required = xr ^ k;// if we saw this in map
            if (freq.find(required) != freq.end()) {//add its count 
                count += freq[required];
            }

            freq[xr]++;//if not seen add that in map with its freq
        }

        return count;
    }
};
