import java.util.*;
public class learnset {
    
    //set contains only unique element , set does not preserve any order 

/*Collection (interface)
   |
   --> Set (interface)
         |
         --> HashSet (class)
         --> LinkedHashSet (class)
         --> TreeSet (class)*/
          public static void main(String args[]){
//Set<Integer> st=new HashSet<>();// in this order is not mentained, operations O(1);
//Set<Integer> st =new LinkedHashSet<>();// order is mentained same as your insertion order
  
Set<Integer> st =new TreeSet<>();//when you want set andd in sorted order you use TreeSet, all operation are O(logn)
st.add(1);
    st.add(2);
    st.add(3);
    st.add(56);
    st.add(1);//dont allow duplicate

System.out.println(st);

//remove()
st.remove(2);
System.out.println(st);

System.out.print(st.contains(56));
System.out.println(st.isEmpty());
System.out.println(st.size());

st.clear();
System.out.println(st.size());


}}
