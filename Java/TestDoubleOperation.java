import java.util.Scanner;

public class TestDoubleOperation{
   public static void main(String aregs[]){
      // by default java takes double values
 
      Scanner sc = new Scanner(System.in);
      double no1,no2,add,sub,mul,div;
      System.out.println("Enter no1: ");
      no1 = sc.nextDouble();
      System.out.println("Enter no2: ");
      no2 = sc.nextDouble();
      add = no1+no2;
      sub = no1-no2;
      mul = no1*no2;
      div = no1/no2;
      System.out.println("Addition of two double value: "+add);
      System.out.println("Subtraction of two double value: "+sub);
      System.out.println("Multiplication of two double value: "+mul);
      System.out.println("Division of two double value: "+div);
   }
}