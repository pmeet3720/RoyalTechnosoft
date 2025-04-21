// calculator using switch case

#include<stdio.h>

int main(){
    int a, b,sum=0,sub=0, mul=1, div=0, mod=0;
    char op='+';
    printf("enter values a and b: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    // printf("enter operator=> ");
    // scanf("%c", &op);
    // scanf("%c", &op);

    switch(op){
        case '+':
            sum = a + b;
            printf("The result is: %d",sum);
            break;
        case '-':
            sub = a - b;
            printf("The result is: %d",sub);
            break;
        case '*':
            mul = a * b;
            printf("The result is: %d",mul);
            break;
        case '/':
            div = a / b;
            printf("The result is: %d",div);
            break;
        case '%':
            mod = a % b;
            printf("The result is: %d",mod);
            break;
        default:
            printf("operator not in calculator!");
            break;
    }
    return 0;
}