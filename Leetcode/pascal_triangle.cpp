class Solution {
public:
    vector<vector<int>> generate(int numRows) {
vector<vector<int>> ans;
for (int i = 0; i < numRows; i++) {
    vector<int> row(i + 1, 1);  // Create a row with (i+1) 1s
    ans.push_back(row);//push into ans 
}

     for(int i=2;i<numRows;i++){//filling from 2nd row 

        for(int j=1;j<i;j++){
            
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];// fill only middlwe element 
    }

    }return ans;
    }
};
