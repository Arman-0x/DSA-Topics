class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int w1i=0;int i=0;
        int w2j=0; int j=0;

        while(w1i<word1.size() && w2j<word2.size()){
            if(word1[w1i][i]!=word2[w2j][j]){
                return false;
            }

            i++;
            j++;

            if(i==word1[w1i].length()){
                w1i++;
                i=0;
            }
            if(j==word2[w2j].length()){
                w2j++;
                j=0;
            }

        }
        if(w1i==word1.size() && w2j==word2.size()){
            return true;
        }
                        return false;

    }
};