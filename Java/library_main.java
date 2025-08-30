import java.util.*;
    class library{
       ArrayList<String> available_books = new ArrayList<>();
    ArrayList<String> issued_books = new ArrayList<>();

        public void addbooks(String b){
            available_books.add(b);

        }
        public void issue_book(String book){
            if(available_books.contains(book)){
            issued_books.add(book);
            available_books.remove(book);
            System.out.println("You have issued this book :"+book);}
            else{
                System.out.println("No such Book is available in our Stock !!");
            }
        }

        public void return_book(String book){
            available_books.add(book);
            issued_books.remove(book);
            System.out.println("You have returned this book :"+book);
        }

        public void availablebooks(){
             System.out.println(available_books);
        }




    }



public class library_main{

    public static void main(String[] args){

        library lib= new library();

        lib.addbooks("the atomic habits");
         lib.addbooks("the health is wealth ");
          lib.addbooks("the time is money");

          lib.availablebooks();
          lib.issue_book("the atomic habits");

        lib.issue_book("time and tide waitt for no man ");
       lib.return_book("the atomic habits");





    }
}