// reverse array
#include<stdio.h>

int main(){
    int a[4];

    printf("enter values for array \n");

    for (int i = 0; i < 4;i++){
        scanf("%d", &a[i]);
    }

    for (int i = 3; i >= 0;i--){
        printf("a[%d] = %d\n", i, a[i]);
    }
        return 0;
}