import java.util.Calendar;
import java.util.TimeZone;

public class calender_class {

    public static void main(String []args){

        Calendar c = Calendar.getInstance(TimeZone.getTimeZone("Asia/Singapore"));
        Calendar c = Calendar.getInstance();
        System.out.print(c.getCalendarType());
        System.out.println(c.getTime());
        System.out.println(c.getTimeZone());
         System.out.println(c.getTimeZone().getID());


    }
    
}
