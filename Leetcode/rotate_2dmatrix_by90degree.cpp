#brute force 
1>use vector to track keep all element row wise
2> then take element of vector from back and insert row wise in reverse order
#time complexity O(NXM) 
#space complexity O(NXM)\

#optimal
#Transpose
#reverse all rows of matrix
#time complexity O(NXM) 
#space complexity O(1)
#include<vector>
class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
       
    int n=mat.size();
    int m=mat[0].size();
       
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
};
