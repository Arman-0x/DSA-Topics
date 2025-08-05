
import java.util.*;
import java.util.ArrayList;
public class learnarraylist {
    

    public static void main(String args[]){

        ArrayList<Integer> list=new ArrayList<>(1);// in array list there is tostring method that invoked when we print list

        // n + n/2 +1  this is how array list expand

        list.add(1);
                list.add(6);
                        list.add(4);
                    System.out.print(list.get(0));//use .get() ,method to access the element in  arraylist pass index there

  System.out.print(list.size());

 System.out.println(list);
        // to add element at particular index
                        list.add(1,1000);

System.out.println(list);
//we can also add new list to old list using ADDALL function addAll();
ArrayList<Integer> list2=new ArrayList<>(1);
list2.add(77);// TC O(N)
list2.add(44);

list.addAll(list2);
 System.out.println(list);
// to remove any element at particular index use remove();

list.remove(1);//TC O(N)

list.remove(Integer.valueOf(77));// Interget.valueOf() to remove particular element pass this in remove function 
 System.out.println(list);

// list.clear();//to remove all el in the list 
 System.out.println(list);


        //to set valuse

        list.set(1,4);

System.out.println(list);
        Collections.reverse(list);//Collections.reverse()  to reverse the array list   //pass arrray list in the parenthesis

        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }

        for(Integer it:list){//for each loop
            System.out.print(it+" ");
        }
       /* for(auto it:list){//for each loop
            System.out.print(it+" ");// java not have auto loop
        }*/

        Iterator<Integer> it = list.iterator();

        while(it.hasNext()){

            System.out.println(it.next());

        }


 System.out.println(list);

    }



}
