/*#approach
use hashset to store the element
check if element previous consecutive is present , if not then check for longest consecutive
Time complexity O(N)
Space complexity O(N)
*/
#include<unordered_map>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int longest=0;
     if(nums.size()==0){
        return 0;
     }
     unordered_map<int,int>mapi;

     for(int i=0;i<nums.size();i++){
        mapi[nums[i]]++;
     }
     for( auto it:mapi){
    int     cnt=1;
      int  x=it.first;
        if(mapi.find(x-1)==mapi.end()){
            while(mapi.find(x+1)!=mapi.end()){
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }
     }return longest;
    }
};
