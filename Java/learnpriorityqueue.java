import java.util.*;
public class learnpriorityqueue {
    
    public static void main(String args[]){
      //  PriorityQueue<Integer> pq=new PriorityQueue<>(); to make min heap
             PriorityQueue<Integer> pq=new PriorityQueue<>(Comparator.reverseOrder());//max heap

        pq.add(3);// add , offer, remove , peak
         pq.add(1);
          pq.add(2);
           pq.add(8);
            pq.add(9);
pq.remove();
pq.remove();
            System.out.print(pq);
    }
}
