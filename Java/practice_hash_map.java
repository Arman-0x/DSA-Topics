import java.util.*;
public class practice_hash_map{

 public static void main(String args[]){

    int []arr=new int[]{1,2,4,6,7,9,9,7,5,4,3};
    //cnt freq of element;
    HashMap<Integer,Integer> mp =new HashMap<>();

    for(int i=0;i<arr.length;i++){
        if (mp.containsKey(arr[i])) {
    mp.put(arr[i], mp.get(arr[i]) + 1);
} else {
    mp.put(arr[i], 1);
}
    }
    int count =0;// count occ odf 9
    for(Integer it :mp.keySet()){
        System.out.println(it +"->"+mp.get(it));
        if(it==9){
            count =mp.get(it);
        }
    } System.out.println("occ of 9=>"+ count);
 }

}
