import java.util.*;

public class reverseLL{

    public static void main(String args[]){

        LinkedList<Integer> l =new LinkedList<>();
        LinkedList<Integer> L =new LinkedList<>();
        l.add(4);
  l.add(54);
    l.add(2);
      l.add(6);
        L.add(4);
          L.add(4);
            L.add(4);
              L.add(4);

        l.add(0,111);
        System.out.println(l);

        int i=0;
        int r=l.size()-1;
        while(i<r){
         int    temp=l.get(i);
            l.set(i,l.get(r));
            l.set(r,temp);
            i++;
            r--;
        }

        l.addAll(L);
           System.out.println(l);
           
           l.addFirst(111);
           l.addLast(999);
           l.remove("999");
           Collections.sort(l);
 System.out.println(l);
  System.out.println(l.contains(111));

  


    }
}