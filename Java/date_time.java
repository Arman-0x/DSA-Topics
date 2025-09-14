import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
public class date_time {
    public static void main(String []args){

        //System.out.println(System.currentTimeMillis()/1000/3600/24/365);
        Date d= new Date();
        System.out.println(d);
        System.out.println(d.getTime());
        System.out.println(d.getDate());//it is depreciated not recommended , use calender 
        
        GregorianCalendar cal =new GregorianCalendar();
        cal.getTime();
System.out.println("MONTH: " + cal.get(Calendar.MONTH));   
System.out.println("DAY: " + cal.get(Calendar.DAY_OF_WEEK));
System.out.println("WEEK of year: " + cal.get(Calendar.WEEK_OF_YEAR));
System.out.println("week of month: " + cal.get(Calendar.WEEK_OF_MONTH));
System.out.println("week of month: " + cal.get(Calendar.DAY_OF_MONTH));
System.out.println("ERA: " + cal.get(Calendar.ERA));
System.out.println("AM/PM: " + cal.get(Calendar.AM_PM));
System.out.println("week of month: " + cal.get(Calendar.WEEK_OF_MONTH));
System.out.println("MINUTE: " + cal.get(Calendar.MINUTE));
 System.out.println("SECOND: " + cal.get(Calendar.SECOND));
  System.out.println("hour: " + cal.get(Calendar.HOUR));

 System.out.println("MILLISECOND: " + cal.get(Calendar.MILLISECOND));






}
}
