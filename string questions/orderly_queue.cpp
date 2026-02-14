/*899. Orderly Queue
You are given a string s and an integer k. You can choose one of the first k letters of s and append it at the end of the string.
Return the lexicographically smallest string you could have after applying the mentioned step any number of moves.
 */
class Solution {
public:
    string orderlyQueue(string s, int k) {
//sorted will be lexicographically small
        if(k>1){
           sort(s.begin(),s.end());
            return s;
        }

        int n=s.size();
        string result=s;
//if k==1 then loop will run n-1 times and compares who is lexicographic small
        for(int i=1;i<n;i++){
            string temp=s.substr(i)+s.substr(0,i);
            result=min(temp,result);

        }

        return result;


        
    }
};