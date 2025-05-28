import java.util.Scanner;

public class TestMaxofThree{
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      int no1,no2,no3,max;
      System.out.println("Enter no1: ");
      no1 = sc.nextInt();
      System.out.println("Enter no2: ");
      no2 = sc.nextInt();
      System.out.println("Enter no3: ");
      no3 = sc.nextInt();

      if (no1 > no2){
         if(no1 > no3){
            max = no1;        
         }else{
            max = no3;
         }
      }else if(no2 > no3){
         max = no2;
      }else{
         max = no3;
      }
      
      System.out.println("Maximum of three nums: "+max);

   }
}