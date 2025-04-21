// display only prime 
#include<stdio.h>

int main(){
    int a[5][5], i, j,flag=0,pc=0,l=2,m;
    int no = 1;

    for (i = 0; i < 5;i++){
        for (j = 0; j < 5;){
            no = l;
            flag = 0;
            for (int k = 2; k <= no / 2;k++){
                if(no%k==0){
                    flag = 1;
                    break;
                }
            }
            if(!flag && no!=1){
                // pc++;
                
                a[i][j] = no;
                j++;
            }
            l++;
        }
    }

    for (i = 0; i < 5;i++){
        for (j = 0; j < 5;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
        return 0;
}