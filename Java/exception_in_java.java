 class invalidageexception extends Exception{//we can create our exception by Extending exception class .


    @Override
    public String getMessage(){
        return super.getMessage()+ " invalid age";
    } 

    public  int divideno  (int a,int b)throws ArithmeticException {

    

      //  int div =a/b;

        return a/b;
    }

}

public class exception_in_java{

    public static void main(String[] args){
        invalidageexception obj=new invalidageexception( );

       /*  int age=99;

        if(age>18){

            try{

                throw new invalidageexception();
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
        else{
             System.out.println("valid age");
        }*/
try{
        System.out.println(obj.divideno(3,0));
}
catch(ArithmeticException e ){
    System.out.println(e.getMessage());
}

           System.out.println("end of program ");
    }
}