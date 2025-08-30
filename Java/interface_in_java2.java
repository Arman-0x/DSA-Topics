
  interface Smarttvremote{

    void opennetflix();

 }
  interface Tvremote extends Smarttvremote {

    void ontv();
 }
 class tv implements Tvremote{
        public void ontv(){
            System.out.println("Turning Tv on....");
        }
        
    public void opennetflix(){
        System.out.println("openning netflix... ");
    }
 }

public class interface_in_java2 {

     public static void main(String[]args ) {
/*  tv t= new tv();
 t.ontv();
 t.opennetflix();*/
 Tvremote re=new tv();

 re.ontv();
re.opennetflix();
 Smarttvremote rem=new tv();
 rem.opennetflix();
 //rem.ontv();


} 
}
