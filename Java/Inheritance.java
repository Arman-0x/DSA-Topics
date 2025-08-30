import java.util.*;
 class Lion{

    String roar;
    String gender;

    public Lion(){
       System.out.println("this is Lion kings voice ");
               System.out.println("Lion is male : ");


    }
    public Lion(int a){
       System.out.println("this is Lion kings butb paramerized cons ");
               System.out.println("Lion is male : ");


    }

 }
class Tiger extends Lion {

    public Tiger() {
         
        System.out.println("this is tiger");
    }

    public Tiger(String s) {

        this.roar = "this roar is of tiger ";
    }

}
class Cat extends Tiger {

    public Cat() {
        super(4);
        System.out.println("this is a cat ");
    }

    public Cat(String s) {
       
        this.roar=s; 
        System.out.println(roar );
    }
    public Cat(String s, String a) {
        this.roar=s; 
        this.gender=a;
    }

}
public class Inheritance {

    public static void main(String[] args ){

        Cat c = new Cat();

    }

}
