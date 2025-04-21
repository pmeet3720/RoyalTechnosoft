// 
#include<stdio.h>

int main(){
    int esum = 0;
    int a[10];

    for (int i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10;i++){
        if(a[i]%2==0){
            esum += a[i];
        }
        else{
            printf("a[%d]: %d\n", i, a[i]);
        }
    }
    printf("\n");
    printf("sum of even is %d", esum);
    return 0;
}