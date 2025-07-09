class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
//sort strings in alphabetical order 
        string first=strs[0];
        int n=strs.size();  //they  will form a group of same prefix , if they had any
        string last=strs[n-1];
string ans="";
        for(int i=0;i<first.length();i++){

            if(first[i]==last[i]){//compare first and last only
                ans+=first[i];

            }
            else{
break;
            }
        }return ans;
    }
};
