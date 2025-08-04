public class arrays {
    

    public static void main(String args[]){

//int [] arr=new int[]{1,2,3,5,6};//declace and initialize without size


      int arr[];//first declare
arr=new int[]{1,2,4}; //then initialize values without size

//int arr[]=new int[]{1,3,4,5};
/* */
/* 
 int arr[]= new int[5];//declare and initialize size
 arr[0]=1;//then assign values
  arr[1]=1;
 arr[2]=1;*/
        System.out.print(arr[0]);
        /*Type	Length/Size
int[] arr	arr.length
ArrayList<Integer> list	list.size()
 */
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }


    }
}
