// wap to calculate the electricity bill(accept number of unit from user) according to the following criteria:
/* Unit                Price
First 100 units        no charge
Next 100 units         Rs 5 per unit
After 200 units        Rs 10 per unit
(for example if input unit is 350 than total bill amount is Rs 2000) */

#include<stdio.h>

int main(){
    int unit;
    printf("enter unit: \n");
    scanf("%d", &unit);

    if(unit<=100){
        printf("No charge");
    }else if(unit>100 && unit<=200){
        printf("%d", unit * 5);
    }else if(unit>200){
        printf("%d", 2000);
    }
    return 0;
}