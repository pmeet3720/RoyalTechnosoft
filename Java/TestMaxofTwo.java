import java.util.Scanner;

public class TestMaxofTwo{
  public static void main(String args[]){
     Scanner sc = new Scanner(System.in);
     int no1,no2,max;
     System.out.println("Enter no1: ");
     no1 = sc.nextInt();
     System.out.println("Enter no2: ");
     no2 = sc.nextInt();
      
     if(no1<no2){
       max = no2;
     }else{
       max = no1;
     }
   
     System.out.println("Maximum of two numbers is: "+max);
 
  }
}