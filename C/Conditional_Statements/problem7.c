// wap to find greatest of three numbers

#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter 3 numbers a,b and c: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b){
        if(a>c){
            printf("%d is largest", a);
        }else if(c>b){
            printf("%d is largest", c);
        }
    }
    else if(b>c){
        printf("%d is largest", b);
    }
    else{
        printf("%d is largest", c);
    }
    return 0;
}

// 48-57 is numerical values
// 65-90 is captical alphabet
// 97-121 is small alphabet