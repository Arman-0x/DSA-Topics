import java.util.*;

public class index_of_first_reapeating_elemetn {
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of array");
        int n = sc.nextInt();
        
        int [] arr = new int[n];
        System.out.println("enter the elements of array");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        Map<Integer, Integer> map = new HashMap<>();
        int ans = Integer.MAX_VALUE;

        for(int i = 0; i < n; i++){
            if(map.containsKey(arr[i])) {
                ans = Math.min(ans, map.get(arr[i])); // take the earliest index
            } else {
                map.put(arr[i], i); // store first occurrence
            }
        }

        if(ans > -1){
            System.out.println("First repeating element at index: " + ans);
        } else {
            System.out.println("No repeating element found");
        }
    }
}
