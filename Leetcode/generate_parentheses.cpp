class Solution {
public:
    vector<string>result;
    /*bool isValid(string & s){

        int paren = 0;
        for(int i=0;i<s.size();i++){

            if(s[i]=='('){
                paren=paren+1;
            }
            else if(s[i]==')'){
                paren=paren-1;
            }

            if(paren==-1){//if any point i encountered a close first 
                return false;
            }

        }
        if(paren==0){
            return true;
        }
        return false;
    }*/
    
    void solve(string  curr, int n, int open , int close){

        if(curr.size()==2*n){

           /* if(isValid(curr)){
                result.push_back(curr);
            } */ 
            result.push_back(curr);
            return ;
        }

        if(open<n){
        curr.push_back('(');
        solve(curr,n,open+1,close);
        curr.pop_back();
        }

        if(close<open){
        curr.push_back(')');
        solve(curr,n,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        
        string curr="";
        solve("",n,0,0);
        return result;
    }
};