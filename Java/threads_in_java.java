import java.util.*;
import java.io.*;
// creating thread by extending Thread class 
 class mythread1 extends Thread{

     public mythread1(String name){
            super(name);
    }
    public void run(){// this run is predefined method in Thread to create 
    for(int i=0;i<1;i++){
        System.out.println("this is thread 1  "+getName());
    }
}
 }

  class mythread2 extends Thread{
public mythread2(String name){
            super(name);
    }
    @Override
    public void run(){// this run is predefined method in Thread to create 
    for(int i=0;i<100;i++){
        System.out.println("this is thread 2  "+getName());
    }
}
 }


public class threads_in_java {
    public static void main(String []args){

        mythread1 t1= new mythread1("hii");
         mythread1 t3= new mythread1("its new thread 3 working...");
         mythread2 t2= new mythread2("byyee its t2");
t1.setPriority(Thread.MAX_PRIORITY);//we can set priority MAX and MIN
 
        //t1.start();//Starts thread (JVM calls run()).
        //t2.start();
        t3.start();

        System.out.println(Thread.currentThread().getId());



    }
}
