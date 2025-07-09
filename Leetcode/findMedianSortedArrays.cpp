class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
vector<int>v;
        while(i<m && j<n){
if(nums1[i]<=nums2[j]){
    v.push_back(nums1[i++]);
}
else if(nums2[j]<nums1[i]){
    v.push_back(nums2[j++]);
}
        }
        while(i<m){
            v.push_back(nums1[i++]);
        }
        while(j<n){
            v.push_back(nums2[j++]);
        }

        int n1=v.size();
        double x=0;
        if(n1%2==1){
            return v[n1/2];
        }
        else{
x=(v[n1/2]+v[(n1/2)-1])/2.0;
        }
return x;
    }
};
