// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string &s1, string &s2) {
        // code here
        
	 // your code here
        int m=s1.size();
        int n=s2.size();
        
        int t[m+1][n+1];
   int result=0;
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++){
                if(i==0|| j==0){
                    t[i][j]=0;   
                }
            }
        }
        
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++){
              //continous
              if(s1[i-1]==s2[j-1]){
                  t[i][j]=1+t[i-1][j-1];
               
                  
              }
              else{
                t[i][j]=max(t[i][j-1],t[i-1][j]);
              }
                
                
            }
            
        } 
result=m+n-t[m][n];
return result;
}
    
};
