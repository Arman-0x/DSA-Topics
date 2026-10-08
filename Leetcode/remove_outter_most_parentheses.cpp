class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int open = 0;
        string result = "";
        for(int i = 0; i < s.size(); i++){

            if(s[i]=='('){

                if(open!=0){//Means this is inner part
                result+=s[i];
                }
                open++;
            }
            else{
                open--;
                if(open!=0){//Means this is inner part also
                result+=s[i];
                }
            }

        }

        return result;
    }
};