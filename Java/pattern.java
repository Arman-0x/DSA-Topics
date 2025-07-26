// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class pattern {
    public static void main(String[] args) {

   
   int r=10;
   
   /*for(int i=r;i>=1;i--){
       
       for(int j=1;j<=r;j++){
           if(j<=r-i){
               cout<<" ";
           }
           else{
               cout<<"*";
           }
       }*/
      /* for(int i=r;i>=1;i--){
           
           for(int j=1;j<=i;j++){
               cout<<j;
           } cout<<endl;
       }*/
      /* int a=1;
       for(int i=1;i<=r;i++){
           
           for(int j=1;j<=r;j++){
               if(j<=i){
                    cout<<a++;
               }else{
                   cout<<" ";
               }
           }cout<<endl;*/
           int   flip=1;
           
           for(int i=1;i<=r;i++){
               
               for(int j=1;j<=i;j++){
                  System.out.print(flip);
                   flip=1-flip;
               }System.out.println("");
           }
   

   





    }
}