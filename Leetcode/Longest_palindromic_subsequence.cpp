//Longest palindromic subsequence 
class Solution {
  public:
    int longestPalinSubseq(string &a) {
        // code here
        string b=a;
        // second string
        //revese it and appply lcs
        reverse(b.begin(),b.end());
        int m=a.size();
    int n=b.size();

    int t[m+1][n+1];
    for(int i=0;i<m+1;i++){//initialization
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }

     for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
           
           if(a[i-1]==b[j-1]){//if match
            t[i][j]=1+t[i-1][j-1];
           }

           else{//if not match
t[i][j]=max(t[i-1][j],t[i][j-1]);
           }
        }
    }//i noticed that
    //lps equivalent to lcs(a,reverse of a);
    return t[m][n];
    }
};
