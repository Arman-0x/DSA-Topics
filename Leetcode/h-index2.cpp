class Solution {
public:
    int hIndex(vector<int>& citations) {//H-index = number of papers that each have at least that many citations.
        int n = citations.size();
        int low = 0;
        int high = n-1;
        int papers = 0;
        int ans = 0;
        while(low<=high){

            int mid = low + (high-low)/2;
            papers = n - mid;

            if(citations[mid]>=papers){
                ans = papers;
                high = mid -1;
            }
            else{
                low  = mid + 1;
            }
        }

        return ans; 
    }
};