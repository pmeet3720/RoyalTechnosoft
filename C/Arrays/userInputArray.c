// print 4 values with user input
#include<stdio.h>

int main(){
    int a[4];

    for (int i = 0; i < 4;i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 4;i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
        return 0;
}