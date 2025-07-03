
//3304. Find the K-th Character in String Game I
class Solution {
public:
    char kthCharacter(int k) {
        string sb="a";
        while(sb.size()<k){
            int size=sb.length();

            for(int i=0;i<size;i++){
                char nextChar ='a' +(sb[i]-'a'+1)%26;
                sb+=nextChar;
            }
        }
        return sb[k-1];
    }
};
