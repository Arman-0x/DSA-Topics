import java.util.*;

    class rectangle{
     private   int length;
     private int breath;

     public rectangle(){// constructor
        this.length=1;
        this.breath=1;

     }
     public rectangle(int l , int b){//parameterized constructor , this is overloaded 
        this.length=l;
        this.breath=b;
     }

        public void setlen(int l){
            this.length=l;
        }
        public void setbre(int b){
            this.breath=b;
        }

         public int getlen(){
            return length;
        }
        public int getbre(){
            return breath;
        }

        public int getarea(){
            return length*breath;
        }



    }
public class practice_oops_2{

    public static void main(String[] args){

        rectangle rc= new rectangle(2 , 6);
       // rec.lenght=8;
       // rec.breath=9; we cannot access private members directly , for that we need getter setters 

       //rc.setlen(8);
       //rc.setbre(8);

        System.out.println("area :"+ rc.getarea());

    }
}