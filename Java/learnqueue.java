import java.util.Queue;
import java.util.LinkedList;

public class learnqueue{

    public static void main(String args[]){


        Queue<Integer> q=new LinkedList<>();// queue is an interface but linkedlist is the class that implements it 
// offer , peak , remove is used to add , return heead , and remove head
        q.offer(4);
        q.offer(5);
        q.offer(7);
        q.offer(8);
        q.offer(9);

        q.remove();
        q.peek();
        System.out.print(q);
          System.out.print(q.peek());
        }
}