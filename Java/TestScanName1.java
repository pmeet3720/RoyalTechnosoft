import java.util.Scanner;

public class TestScanName1{
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter Name: ");
      String name = sc.next(); // single word scanning

      /*System.out.println("Enter Name1: ");
      String name1 = sc.nextLine(); // multiple words scanning*/
      System.out.println("Name: "+name);
      //System.out.println("Name1: "+name1);

   }
}