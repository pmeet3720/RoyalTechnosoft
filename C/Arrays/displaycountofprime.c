// 
#include<stdio.h>
#include<math.h>

int main(){
    int pcount = 0,flag=0,no;
    int a[10];

    for (int i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10;i++){
        no = a[i];
        flag = 1;
        for (int j = 2; j <= no/2;j++){
            if(a[i]%j==0){
                flag = 0;
                printf("A[%d]: %d\n",i, a[i]);
                break;
            }
        }
        if(flag && no!=1){
            pcount++;
        }
    }
    printf("count of prime is %d", pcount);
    return 0;
}