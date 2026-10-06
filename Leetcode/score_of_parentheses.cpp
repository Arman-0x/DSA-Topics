class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<int> st;
        

        for(int i=0;i<s.size();i++){

            if(s[i]=='('){ //((())) ()   0 0 4 

                st.push(0);
            }
            else{

                if(s[i-1]=='('){//not a nested

                    int num =st.top();
                    st.pop();
                    num += 1;


                    if(!st.empty()){
                    st.top() += num;
                    }
                    else{
                    st.push(num);
                    }
                }
                else{//  s[i-1] is a ) it is a nest ned one
                    int num =st.top();
                    st.pop();
                    num = num * 2;

                    if(!st.empty()){
                        st.top() += num;
                    }
                    else{
                    st.push(num);
                    }

                }

            }

        }

            return st.top();
        }

};