#include<stdio.h>

void main(){
    int days[7] = {8,7,6,5,4,3,2};
    int buy, sell,profit,loss,cw=0;

    printf("\nEnter buy day: ");
    scanf("%d", &buy);

    printf("\nEnter sell day: ");
    scanf("%d", &sell);

    for (int i = 0; i < 7;i++){

        if(days[sell-1]-days[buy-1]>=days[buy-1]){
            profit = days[sell - 1] - days[buy - 1];
        }else{
            profit = days[sell - 1] - days[buy = 1];
            cw++;
        }

    }
    if(cw==7){
        printf("bad week\n");
    }else if(profit>days[buy-1]){
        printf("Profit: %d", profit);
    }else{
        printf("Loss: %d", profit);
    }
}