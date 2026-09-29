class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        int n = arr.size();
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++) {

            // Skip duplicate first values
            if(i > 0 && arr[i] == arr[i-1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while(left < right) {

                int sum = arr[i] + arr[left] + arr[right];

                if(sum == 0) {

                    ans.push_back({
                        arr[i],
                        arr[left],
                        arr[right]
                    });

                    // Skip duplicate left values
                    while(left < right && arr[left] == arr[left + 1])
                        left++;

                    // Skip duplicate right values
                    while(left < right && arr[right] == arr[right - 1])
                        right--;

                    left++;
                    right--;
                }

                else if(sum < 0) {
                    left++;
                }

                else {
                    right--;
                }
            }
        }

        return ans;
    }
};