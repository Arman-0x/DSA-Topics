class Solution {
  public:
    void merge(vector<int>& arr, int l, int r,int mid){
        int m=mid-l+1;
        int n=r-mid;
       vector<int> arr1(m),arr2(n);
        
        int k=l;
        int x=mid+1;
        for(int i=0;i<m;i++){
            arr1[i]=arr[k++];
        }
        
        for(int i=0;i<n;i++){
             arr2[i]=arr[x++];
        }
        
        int i=0;
        int j=0;
        int index=l;
        while(i<m && j<n){
            if(arr1[i]<=arr2[j]){// why merge sort is stable becase it preserve the original order for same elements
                arr[index++]=arr1[i++];
            }else{
                arr[index++]=arr2[j++]; 
            }
        }
        
        while(i<m){
            arr[index++]=arr1[i++];
        }
        while(j<n){
            arr[index++]=arr2[j++];
        }
        
       // return ;
    }
    void sort(vector<int> &arr, int l, int r){
        if(l>=r){
            return ;
        }
        int mid=(l+r)/2;
       
       sort(arr, l,  mid);
        sort(arr, mid+1,  r);
        
        merge(arr,l,r,mid);
    }
    void mergeSort(vector<int>& arr, int l, int r) {
       
       sort(arr,l,r);
        
    }
};