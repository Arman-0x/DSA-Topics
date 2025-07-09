class Solution {
public:
    bool hasMatch(string s, string p) {
        int i = p.find('*');              // find the split point * 

        string pre= p.substr(0,i);        //store prefix
        string suf=p.substr(i+1);         //store suffix

        int pi=s.find(pre);               // find the first index of prefix in s
        if(pi==string::npos)return false; // if index=-1 (not present or npos) return false

        int si=s.find(suf,pi+pre.size()); // find the first index of suffix in s after the prefix end in s
        if(si==string::npos)return false; // if there is no suffic string after the prefix string return false

        return true;                      //both are present prefix and suffix so return true
    }
};
