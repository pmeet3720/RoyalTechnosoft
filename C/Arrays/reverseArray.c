// reverse array
#include<stdio.h>

int main(){
    int a[4];
    int b[4];

    printf("enter values for array \n");

    for (int i = 0; i < 4;i++){
        scanf("%d", &a[i]);
    }
    
    for (int i = 3, j=0; i >= 0,j<4;i--,j++){
        b[j] = a[i];
    }

    printf("Reversed Array: ");
    for (int j = 0; j < 4;j++){
        printf("%d ", b[j]);
    }
        return 0;
}