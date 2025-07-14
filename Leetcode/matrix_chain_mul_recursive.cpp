class Solution {
private:
    int solve(vector<int>& arr, int i, int j) {
        if (i >= j) {
            return 0;
        }
        
        int mini = INT_MAX;

        for (int k = i; k <= j - 1; k++) {
            int tempans = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
            mini = min(tempans, mini);
        }
        
        return mini;
    }

public:
    int matrixMultiplication(vector<int> &arr) {
        return solve(arr, 1, arr.size() - 1);
    }
};

