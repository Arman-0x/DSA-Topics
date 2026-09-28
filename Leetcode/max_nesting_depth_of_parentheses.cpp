class Solution {
public:
    int maxDepth(string s) {
        
        int maxBrackets=0;

        int brackets=0;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='('){
                brackets++;
            }
            else if(s[i]==')'){
                maxBrackets = max(maxBrackets, brackets);
                brackets--;
            }
        }

        return maxBrackets;
    }
};