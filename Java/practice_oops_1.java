import java.util.*;

 class Employee{//cannot create two public class

    int salary;
    String name;

    public void getsalary(){
        System.out.println(salary);
    }
     public void getname(){
        System.out.println(name);
    }

    public void setname(String s){
        this.name=s;

    }



}

public class practice_oops_1{

    public static void main(String[] args){
        Employee e=new Employee();

        e.salary=9394;
        e.setname("Arman");

        e.getname();
        e.getsalary();
    }
}