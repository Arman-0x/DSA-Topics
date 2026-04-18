class Solution {
public:
    vector<string>result;
    // bool isValid(string &curr){int count =0;
    //     for(int i=0;i<curr.size();i++){
    //         if(count<0){
    //             return false;
    //         }
          
    //         if(curr[i]=='('){
    //             count++;
    //         }else{
    //             count--;
    //         }
    //     }
    //     if(count==0){
    //         return true;
    //     }else{
    // //         return false;
    // //     }
    // // } 
    void solve (string & curr, int n,int open,int close){

        if(curr.size()==2*n){
            // if(isValid(curr)){
            result.push_back(curr);
            // }
            return ;

        }
        if(open<n){
        curr.push_back('(');//do
        solve(curr,n,open+1,close);
        curr.pop_back();
        }

        if(open>close){
        curr.push_back(')');
        solve(curr,n,open, close+1);
        curr.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        int open=0;
        int close=0;
        solve(curr,n,open,close);
        return result;
    }
};