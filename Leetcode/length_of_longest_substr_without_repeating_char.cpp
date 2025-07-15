class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        int maxl=0;
        int length=0;
        unordered_map<char,int>mp;
int l=0;
        for(int r=0;r<s.size();r++){
                                            //ignoring prev char of diffrent subarray
                if(mp.find(s[r])!=mp.end() && mp[s[r]] >= l){//if s appers before
               
                l=mp[s[r]]+1;//move l to recent duplicate  appered chars idx +1
               
                }

                
                mp[s[r]]=r;// always save this char and its idx in mp, because even if its a duplicate it can be new distict char for new subarray
                    maxl=max(maxl,r-l+1);
                

        }return maxl;
    }
};
