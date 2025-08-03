#include<vector>
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;

        for(int i=0;i<=rowIndex;i++){
            vector<int>row(i+1,1);//1 in each row
            ans.push_back(row);

        }

        for(int i=2;i<=rowIndex;i++){

            for(int j=1;j<i;j++){//fill only middle element 
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];

            }
        }
        return ans[rowIndex];
    }
};
