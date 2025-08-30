
 interface  phone{

    void ring();
    void call();
    int a=49;
} 
 interface camera{
    void picture();
    void video();
 }
 interface mediaplayer{
    void music();
    void recording();
 }
  class smartphone implements phone, camera, mediaplayer {
    public void ring(){
        System.out.println("ringing...");
    }
   public  void call(){
        System.out.println("calling ...");
    }
   public void picture(){
         System.out.println("taking picture.. ...");
    }
   public void video(){
 System.out.println("video is on ...");
    }

   public void music(){
 System.out.println("listning music ...");
    }
   public void recording(){
     System.out.println("recording  ...");
    }
int  a=48;
 }
public class interface_in_java {

    public static void main(String[] args ){
    smartphone m=new smartphone();

    m.ring();
    m.call();
     m.picture();
     m.video();
 

    m. music();
    m. recording();
    //m.a=999;
    System.out.print(m.a);
}
}
