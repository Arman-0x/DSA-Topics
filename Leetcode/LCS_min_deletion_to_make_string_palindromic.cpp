/* minimum number of characters from the string so that the resultant string is a palindrome, while maintaining the order of characters.*/
class Solution {
  public:
    int minDeletions(string a) {
        // code here
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
    }// In the question min deletion inversely propotionla to length of palindrome
    //if palaindrom length is max then we get the minimum deletion

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
  
  //min deletion = a length - lcs(a,rev(a))
  return a.length()-t[m][n];
    }
};
