class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> curr;
        unordered_set<int> result;
        unordered_set<int> prev;

    for(int i=0;i<arr.size();i++){

        for(auto j:prev){
            curr.insert(j|arr[i]);

            result.insert(j|arr[i]);

        }

          curr.insert(arr[i]);
        result.insert(arr[i]);

    prev=curr;
    curr.clear();


    }
return result.size();

    }
};
