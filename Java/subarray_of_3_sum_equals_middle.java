import java.util.*;

public class subarray_of_3_sum_equals_middle{

    public static void main(String args[]){

        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of array");
        n=sc.nextInt();
        int []arr=new int[n];
        System.out.println("enter element of arrays");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int count =0;
        int i=0;
        for (
         i = 0; i <= n - 3; i++) {
            if (arr[i] + arr[i + 2] == arr[i + 1]) {
                count++;
            }
        }
        System.out.println("subarrays of size 3 whose first+last equals to mid are: "+count);
    }
}