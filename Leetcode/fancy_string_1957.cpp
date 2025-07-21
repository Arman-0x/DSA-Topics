class Solution {
public:
    string makeFancyString(string s) {
        string ans="";

        for(char c:s){
//if previous two are equal to current char skip else keep
            if(ans.size()>=2 && ans.back()==c && ans[ans.size()-2]==c){
                continue ;//skip 

            }
            ans.push_back(c);//keep


        }return ans;
    }
};
