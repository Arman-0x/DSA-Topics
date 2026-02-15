class Solution {
public:
    bool closeStrings(string word1, string word2) {
       int m=word1.size();
       int n=word2.size();
       
       if(m!=n){
        return false;
       }
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(int i=0;i<m;i++){
            char ch=word1[i];
            char ch1=word2[i];
            freq1[ch-'a']++;
            freq2[ch1-'a']++;
        }
// word1 me jo character hai wo word two me chaheye
        for(int i=0;i<26;i++){
            if(freq1[i]==0 && freq2[i]==0){
                continue;
            }
            if(freq1[i]!=0 && freq2[i]!=0){
                continue;
            }
            //agar alag char hai toh false
           return false;
        }
          sort(freq1.begin(),freq1.end());
                sort(freq2.begin(),freq2.end());
// freq1 me frequency freq2 ke equal chaheye to transform word1 to word2
       if(freq1==freq2){
        return true;
       }
        return false;



    }
};