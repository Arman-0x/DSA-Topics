import java.util.*;
public class string{

    public static void main(String args[]){

        ArrayList<String> s=new ArrayList<>(Arrays.asList("ana", "words", "alia", "ranbir", "kapoor"));
 ArrayList<String> ans=new ArrayList<>(Arrays.asList());

        for(String word:s){
            if(word.charAt(0)==word.charAt(word.length()-1)){

                System.out.println(word);
                ans.add(word);
            }
        }System.out.println(ans);
    }  

}/*Arrays → arr.length

Strings → str.length()

ArrayList / other collections → list.size()

 */