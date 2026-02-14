class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int>s1;
        unordered_map<char,int>s2;
int v1=0;
int v2=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' ){
            s1[s[i]]++;
            v1++;
            }
            
        }

        for(int i=s.size()/2;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
            s2[s[i]]++;
            v2++;
            }
        }

        int count=0;
        int count1=0;

        for(auto i:s1){
            count+=i.second;
        }

        for(auto i:s2){
            count1+=i.second;
        }

       /* if(count==count1){
            return true;
        }else{
            return false;
        }*/
        if(v1==v2){
            return true;
        }else{
            return false;
        }



    }
};