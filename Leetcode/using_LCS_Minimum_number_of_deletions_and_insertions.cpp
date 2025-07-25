//Minimum number of deletions and insertions
class Solution {

  public:
    int minOperations(string &a, string &b) {
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
    }
    
    //for deletion=length of a -lcs
    //for insertion = legth of b-lcs
   return a.length()-t[m][n]+b.length()-t[m][n];//
    }
};
