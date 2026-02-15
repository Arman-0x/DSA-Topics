class Solution {
public:
    int n;
    vector<string>result;
    bool isValid(string s){
        if(s[0]=='0'){
            return false;
        }
        int value=stoi(s);
        if(value>255){
            return false;
        }
        return true;
    }
    void solve(string &s, int idx, int parts, string curr){

        if(idx==n && parts==4){//agar puri string travel hogaya and 4 parts bangaye saare char consume karke
           curr.pop_back();//remove dot
           result.push_back(curr);//insert string 
           return ;
        }

        //1 possibility adding 1 digit
        if(idx+1<=n){//adding 1 char at a time folled by a dot 
        solve(s,idx+1,parts+1,curr + s.substr(idx,1) + ".");
        }
        if(idx+2<=n && isValid(s.substr(idx,2))){// when adding 2 or 3 digit check leading zero and 0 to 255 range 
         solve(s,idx+2,parts+1,curr + s.substr(idx,2) + ".");
        }
        if(idx+3<=n && isValid(s.substr(idx,3))){
          solve(s,idx+3,parts+1,curr + s.substr(idx,3) + ".");
        }

    }
    vector<string> restoreIpAddresses(string s) {
         n=s.size();
        if(n>12){// 4 parts me divide karna hai 3 length ka toh 13 ke niche he lenght rahegi hamesha
            return {};
        }
        result.clear();
        int parts=0;
        
        string curr="";

        solve(s,0,parts,curr);
        return result;
    }
};