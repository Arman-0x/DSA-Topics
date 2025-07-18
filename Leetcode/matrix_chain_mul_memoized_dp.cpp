class Solution {

 private: int t[101][101];
     int solve(vector<int>& arr,int i,int j ){
        
        if(i>=j){//BC
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int mini=INT_MAX;
        for(int k=i;k<=j-1;k++){
            
            int tempans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        
        mini=min(tempans,mini);    
        }return mini;
    }
  public:
    int matrixMultiplication(vector<int> &arr) {
         for (int i = 0; i <= arr.size(); i++) {
            for (int j = 0; j <= arr.size(); j++) {
                t[i][j] = -1;
            }
        }

      return   solve(arr,1,arr.size()-1);
        
    }
};
