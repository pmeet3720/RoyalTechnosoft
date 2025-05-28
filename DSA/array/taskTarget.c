#include<stdio.h>

void main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / 4;
    int target = 9,flag=0;

    for (int i = 0; i < n;i++){
        flag = 0;
        int j;
        for (j = target/2; j < n;j++){
            if(a[i]+a[j]==target){
                flag = 1;
                break;
            }
        }
        if(flag){
            printf("%d %d\n", a[i], a[j]);
        }
    }
}