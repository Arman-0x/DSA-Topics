class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
         int n = arr.size(), res = 0;
		unordered_map<int, int> mp;
		mp[0]=1;
		int sum = 0;

		for(int i = 0; i < n; i++) {

	    	// prefix sum mod k (handling negative prefix sum)
	    	sum = (sum + arr[i]);
	    	int rem = sum%k;
	    	if(rem<0){rem+=k;}

	        if(mp.find(rem)!=mp.end()){
	            res += mp[rem];
	        }
	        
	       mp[rem]++;
	    }
		return res;
    }
};