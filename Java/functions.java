import java.util.*;
public class functions {
    
    public static void product(int a,int b){

        System.out.print("Product is "+ a*b);


    }

 public static int  factorial(int n){
if(n==1 || n==0){
    return n;
}
    //int ans=n*n-1;

    return n*factorial(n-1);

 }
public static int add(int a, int b) {
        return a + b;
    }

    // Non-static method (needs an object to call)
    public int multiply(int a, int b) {
        return a * b;
    }    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);

       // int a=sc.nextInt();
        //int b=sc.nextInt();
int n=sc.nextInt();

//product(a,b);

 System.out.print(factorial(n));

  int sum = add(5, 3);
        System.out.println("Sum is: " + sum);

        // Calling non-static method
        functions obj = new functions();  // create object
        int product = obj.multiply(5, 3);
        System.out.println("Product is: " + product);



    }
}
