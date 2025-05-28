public class TestLoop{
   public static void main(String args[]){
       for(int i=1;i<=5;i++){
          System.out.println("No. "+i);
       }
       

       System.out.println("------------------------------------------");
       
       
       int i=5;
       while(i>=1){
          System.out.println("No. "+i);
          i--;
       }
  

       System.out.println("------------------------------------------");
  

       i=1;
       int sum=0;
       do{
          sum = sum + i;
          i++;
       }while(i<=5);
       System.out.println("Sum: "+sum);

   }
}