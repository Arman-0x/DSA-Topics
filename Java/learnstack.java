
import java.util.Stack;

public class learnstack {
    
    public static void main(String args[]){

        Stack<Integer> st=new Stack<>();

        st.push(5);
        st.push(6);
         st.push(2);
          st.push(1);
           st.push(0);
            st.push(9);
            System.out.println("Stack"+st);

            st.pop();//to remove to ele

            System.out.print("Peek"+st.peek());
int a=st.peek();

    }
}
