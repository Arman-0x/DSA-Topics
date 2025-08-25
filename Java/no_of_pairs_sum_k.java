import java.util.*;
public class no_of_pairs_sum_k{

    public static void main(String args []){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the size of array");
        int n=sc.nextInt();
         System.out.println("enter the target k");
        int k=sc.nextInt();
        int []arr=new int[n];
        System.out.println("enter the elements of array");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int count =0;
       Map<Integer,Integer> mp=new HashMap<>();
        
       /*  for(int i=0;i<n;i++){
5
            int temp=k-arr[i];
            for(int j=i+1;j<n;j++){

                if(arr[j]==temp){
                    count++;
                }
            }
        }*/
         for(int num:arr){

            int complement=k-num;
            if(mp.containsKey(complement)){
                count +=mp.get(complement);
            }

            mp.put(num,mp.getOrDefault(num,0)+1);
         }
        System.out.println("pairs sum k:" + count);
    }
}