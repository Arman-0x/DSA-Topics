class Solution {
public:
    int minAddToMakeValid(string s) {

        int n = s.size();
        int mini = 0;
        int open = 0;
        for(int i=0; i<n; i++){

            if(s[i]=='('){
                open++;
            }
            else{
                open--;
            }

            if(open<0){// at any point you encountered a closing before opening close it 
                mini++;
                open=0;
            }
        }

        mini+=open; // what ever open are there close it
        return mini;
    }
};