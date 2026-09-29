class Solution {
public:
    vector<vector<int>> findTriplets(vector<int>& arr) {

        int n = arr.size();
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {

            unordered_map<int, vector<int>> mp;

            for(int j = i + 1; j < n; j++) {

                int required = -(arr[i] + arr[j]);

                if(mp.find(required) != mp.end()) {

                    for(int k : mp[required]) {
                        ans.push_back({i, k, j});
                    }
                }

                mp[arr[j]].push_back(j);
            }
        }

        return ans;
    }
};