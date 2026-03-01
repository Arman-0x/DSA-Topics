class Solution {
public:
    int strStr(string haystack, string needle) {
        // try to use sliding window approach
        int n=haystack.size();
        int m=needle.size();

        if(m>n){
            return -1;
        }
        if(n==m && haystack==needle){
            return 0;
        }
        int i=0;
        int j=m-1;
        string check="";
        while(j<n){
            check=haystack.substr(i,m);
            if(check==needle){
                return i;
            }
            i++;
            j++;
        }
        return -1;
    }
};