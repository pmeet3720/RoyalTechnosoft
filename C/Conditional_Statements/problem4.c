// wap to accept cost price of bike and display road tax to be paid according

/**cost price     tax
 * >100000        15%
 * >50000 and <= 100000    10%
 * <= 50000             5%*/ 

 #include<stdio.h>

 int main(){

    int costPrice, tax=0;

     printf("enter the cost price of bike: \n");
     scanf("%d", &costPrice);

     if(costPrice>100000){
         tax = (costPrice * 15) / 100;

         printf("%d",tax);
     }else if(costPrice>50000 && costPrice<=100000){
         tax = (costPrice * 10) / 100;
         printf("%d",tax);
     }else if(costPrice<=50000){
         tax = (costPrice * 5) / 100;
         printf("%d",tax);
     }
     return 0;
 }