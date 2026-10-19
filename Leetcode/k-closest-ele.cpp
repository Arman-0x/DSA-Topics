class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n = arr.size();
        priority_queue<pair<int,int>> p; // abs arr[i]-k , arr[i]
        vector<int> ans;

        for(int i=0;i<arr.size();i++){
             p.push({abs(arr[i]-x), arr[i]});
             if(p.size()>k){
                p.pop();
             }
        }

        
       while(!p.empty()){

        ans.push_back(p.top().second);
        p.pop();
       }

        sort(ans.begin(), ans.end());
        return ans;

    }
};