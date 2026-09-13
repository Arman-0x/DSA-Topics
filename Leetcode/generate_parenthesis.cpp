class Solution {
  public:
    vector<string>result;
    
    bool isValid(string & s){
        int brackets=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                brackets=brackets+1;
            }else{
                brackets=brackets-1;
            }
            
            if(brackets<0){//you have incountered a invalid string
                return false;
            }
            
        }
        
        return brackets==0?true:false;
        
    }
    void solve(int n, string curr){
        
        if(curr.size()==n  ){
           if(isValid(curr)){
            result.push_back(curr);
            return ;
               
           }
            return;
        }
        
        curr.push_back('(');
        solve( n, curr);
        
        curr.pop_back();
        
        curr.push_back(')');
        solve(n, curr);
        return ;
    }
    
    vector<string> generateParentheses(int n) {
        // code here
        if(n%2==1){
            return result;
        }
        string curr="";
        solve( n, curr);
        
        return result;
    }
};