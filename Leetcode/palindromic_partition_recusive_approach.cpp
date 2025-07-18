// User function Template for C++

class Solution {
    private: bool ispalindrome(string & s,int i,int j){
        
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }
            return false;
        }return true;
        
        
    }
        private: int  partition(string & s,int i,int j){
    
    if(i>=j){//if string is empty or size 1--> no partition
    return 0;
        
    }
    if(ispalindrome(s,i,j)){
        return 0;
    }
    int mini=INT_MAX;
    for(int k=i;k<j;k++){
        
        int tempans=partition(s,i,k)+partition(s,k+1,j)+1;
        
        mini=min(mini,tempans);
    }
            return mini;
            
            
        }
    
    
  public:
    int palPartition(string &s) {
      
      return partition(s,0,s.size()-1);
        
    }
};
