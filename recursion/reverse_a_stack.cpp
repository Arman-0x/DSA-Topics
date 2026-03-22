class Solution {
   
  public:
    
        void insertatbottom(stack<int>&st, int x){
            
            if(st.size()==0){
                st.push(x);
                return;
            }
            
            int a=st.top();
            st.pop();
            insertatbottom(st,x);
            
            st.push(a);
            
            
        }
    
    void reverseStack(stack<int> &st) {
        // code here
        
        if(st.size()==0){
            return;
        }
        int a=st.top();
        st.pop();
        reverseStack(st);
       insertatbottom(st,a);
     //o(n^2) and o(1) space;
        
    }
};