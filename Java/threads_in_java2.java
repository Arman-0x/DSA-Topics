import java.util.*;
import java.io.*;
class mythread1 implements Runnable{
//creating thread by implementing runnable interface
    public void run(){
        System.out.println("thread 1...");
    }
}
class mythread2 implements Runnable{
  public  mythread2(String name){

   
    System.out.println(name);
    }
    @Override
    public void run(){
        System.out.println("thread 2...");
    }
}
public class threads_in_java2 {
    public static void main(String [] args){
       mythread1 t1=new mythread1();
       Thread T1=new Thread(t1);
       mythread2 t2=new mythread2();
        Thread T2=new Thread(t2);

       T1.start();
       T2.start();
    }
}
