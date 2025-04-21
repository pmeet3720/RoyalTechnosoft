// serach the num from array and display count of search
#include<stdio.h>

int main(){
    int a[10],num=10,i,j,numCount=0;
    for (i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10;i++){
        if(num==a[i]){
            numCount++;
            printf("a[%d]: %d\n", i, a[i]);
        }
    }

    if(numCount==0){
        printf("value not found in array\n");
    }

    printf("The count of search value %d is: %d",num, numCount);
    return 0;
}