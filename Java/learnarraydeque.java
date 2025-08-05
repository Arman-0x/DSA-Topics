import java.util.*;

public class learnarraydeque{

public static void main(String args[]){

    ArrayDeque<Integer> adq=new ArrayDeque<>();

    adq.offer(1);//add
     adq.offer(2);
      adq.offerFirst(88);   //Insert from front 
       adq.offerLast(55);// insert from last 

       System.out.println(adq);

       adq.removeFirst();//pollFirst
 adq.removeLast();
       System.out.println(adq);

       // peak(), peekFirst() , peekLast();
}




}