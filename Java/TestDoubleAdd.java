import java.util.Scanner;

public class TestDoubleAdd{
   public static void main(String aregs[]){
      // by default java takes double values
 
      Scanner sc = new Scanner(System.in);
      double no1,no2,ans;
      System.out.println("Enter no1: ");
      no1 = sc.nextDouble();
      System.out.println("Enter no2: ");
      no2 = sc.nextDouble();
      ans = no1+no2;
      System.out.println("Addition of two double value: "+ans);
   }
}