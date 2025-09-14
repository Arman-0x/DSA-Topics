import java.time.LocalDateTime;
import java.time.LocalDate;
import java.time.LocalTime;// stores time in nano seconds , very accurate.
import java.time.format.DateTimeFormatter;
public class date_time_formatter {
    public static void main(String []args){
        LocalDate dt1 =LocalDate.now();
        LocalTime dt2 =LocalTime.now();
        LocalDateTime dt =LocalDateTime.now();//we dont create object of this 
        //System.out.println(dt1);
        //System.out.println(dt2);
          //      System.out.println(dt);

          DateTimeFormatter df= DateTimeFormatter.ofPattern("dd-MM-yyyy");//we can give pattern to our patter like this 
           DateTimeFormatter df2= DateTimeFormatter.ISO_LOCAL_DATE;//Or can use this pattern directly
            
          String s=dt.format(df2);
          System.out.println(s);





    }
}
