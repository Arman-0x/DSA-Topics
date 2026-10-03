class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int xr = 0;
        unordered_map<int, int>mp;
        
        mp[0]=1; // not start yet xor is 0 has 1 frequency
        
        int count = 0;
        
        for(int i=0; i<arr.size(); i++){
            
            xr = xr ^ arr[i];
            
            int need = xr^k; //currentxor ^ oldxor =k hence old=prefixxor^ k
            
            if(mp.find(need)!=mp.end()){
                count += mp[need];
            }
            
            mp[xr]++;
        }
        
        return count;
    }
};