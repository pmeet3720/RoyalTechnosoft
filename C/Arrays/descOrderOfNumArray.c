// scan 10 size array and print numbers in descending order
#include<stdio.h>

int main(){
    int a[10], i, j, temp = 0;
    for (i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10;i++){
        for (j = 0; j < 10;j++){
            if(a[j]<a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 10;i++){
        printf("a[%d]: %d\n", i, a[i]);
    }
        return 0;
}