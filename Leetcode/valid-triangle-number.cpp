class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int target = nums[i] + nums[j];
                int low = j + 1, high = n - 1;
                int boundary = j;

                while (low <= high) {
                    int mid = low + (high - low) / 2;

                    if (nums[mid] < target) {
                        boundary = mid;
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }

                count += boundary - j;
            }
        }

        return count;
    }
};