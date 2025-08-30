import java.util.*;
import java.io.*;
// creating thread by extending Thread class 
 class mythread1 extends Thread{

    public void run(){// this run is predefined method in Thread to create 
    for(int i=0;i<10000;i++){
        System.out.println("this is thread 1  "+i);
    }
}
 }

  class mythread2 extends Thread{

    @Override
    public void run(){// this run is predefined method in Thread to create 
    for(int i=0;i<10000;i++){
        System.out.println("this is thread 2  "+i);
    }
}
 }


public class threads_in_java {
    public static void main(String []args){

        mythread1 t1= new mythread1();
         mythread2 t2= new mythread2();

        t1.start();//Starts thread (JVM calls run()).
        t2.start();

    }
}
