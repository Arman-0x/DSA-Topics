class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int n = spells.size();
        int m = potions.size();
        int score = 0;
        sort(potions.begin(), potions.end());
        vector<int> ans;

        for(int i = 0 ; i < n; i++){

            int spell = spells[i];
            score = 0;
            int low  = 0;
            int high = m-1;
            int mid = 0;
            while(low<=high){

                mid = low + (high-low)/2;
                long long strength =  1LL * spell * potions[mid];
                
                if(strength>=success){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            
            score = m - low;
            ans.push_back(score);

        }
        return ans;
    }
};