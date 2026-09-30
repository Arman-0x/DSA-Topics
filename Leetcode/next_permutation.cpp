class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=n-2;
        //find pivot
        
        while(i>=0){
            
            if(arr[i]<arr[i+1]){
                break;
            }
            i--;
        }
        //if i is -1 reverse the array
        if(i==-1){
        reverse(arr.begin(), arr.end());
        return ;
            
        }
        // find smallest greater then pivot
        
        for(int j=arr.size()-1;j>i;j--){
            
            if(arr[j]>arr[i]){
                swap(arr[j],arr[i]);
                break;
            }
        }
        
        //reverse suffix that will make smallest permutation beacuse all ele right to pivot are in decending
        
        reverse(arr.begin()+i+1, arr.end());
        
        
        
    }
};