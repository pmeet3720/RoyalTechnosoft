// copy array to another array
#include<stdio.h>

int main(){
    int a[4], b[4];
    for (int i = 0; i < 4;i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 4;i++){
        b[i] = a[i];
        printf("b[%d] = %d \n", i, b[i]);
    }
        return 0;
}