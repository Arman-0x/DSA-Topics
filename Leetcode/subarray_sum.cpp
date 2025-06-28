#include<unordered_map>
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>result;
        unordered_map<long long ,int >mp;
       long long sum=0;
      // int maxlen=0;
      // int leftidx=0;
        for(int i=0;i<arr.size();i++){
       
       sum=arr[i]+sum;
       
       if(sum==target){
           //maxlen=(maxlen,i+1);
           result={1,i+1};
           return result;
       }
       long long rem=sum-target;
       if(mp.find(rem)!=mp.end()){
       //    leftidx=maxlen;
           result={mp[rem]+2,i+1};
           return result;
       }
       
       if(mp.find(sum)==mp.end()){
           mp[sum]=i;
       }
      
     
        }
        // v.push_back(leftidx);
        //v.push_back(maxlen);
        return {-1};
    }
};
