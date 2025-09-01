 class invalidageexception extends Exception{//we can create our exception by Extending exception class .

    @Override
    public String getMessage(){
        return super.getMessage()+ "  invalid messsage";
    } 

}

public class exception_in_java{

    public static void main(String[] args){

        int age=99;

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
        }
           System.out.println("end of program ");
    }
}