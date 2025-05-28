#include<stdio.h>

void main(){
    // int m;
    // for (m = 1; m < 5;m++)
    //     printf("%d\n", (m % 2) ? m : m * 2);

    // int m, n, p;
    // for (m = 0; m < 3;m++)
    //     for (n = 0; n < 3;n++)
    //         for (p = 0; p < 3; p++)
    //             if(m+n+p == 2)
    //                 goto print;
            
    //         print:
    //             printf("%d, %d, %d", m, n, p);

    int a = 10, b = 5;
    if(a>b){
        if(b>5)
            printf("%d", b);
    }else{
        printf("%d", a);
    }
}