import java.util.*;

public class guess_the_no {

    public static void main(String[] args){

        int a;
        int b;
        Scanner sc = new Scanner(System.in);
        Random random = new Random();
        System.out.println("User please guess the no between 0 to 9");
        a=sc.nextInt();
        b=random.nextInt(10);

        if(a==b){
            System.out.println("You Won , You Guessed The Correct Number");
        }
        else if(a>=10 || a<0 ){
            System.out.println("You have entered the wrong number ");
        }
        else{
            System.out.println("you lost , you guesed: "+ a +" but the number is : "+b);
        }



    }
}