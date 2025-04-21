// create two functions which returns evenSum and another returns oddSum
#include<stdio.h>

int evenSum(int);
int oddSum(int);
int Sum(int);

int main(){
    int no, evenResult, oddResult;
    printf("\nEnter number: ");
    scanf("%d", &no);

    evenResult = evenSum(no);
    oddResult = oddSum(no);

    printf("The even result is: %d\n", evenResult);
    printf("The odd result is: %d\n", oddResult);

    return 0;
}

int evenSum(int no){
    int r = 0, rev = 0,sum=0;
    int num = no;

    while(num>0){
        r = num % 10;
        if(r%2==0){
            rev = (rev * 10) + r;
        }
        num /= 10;
    }

    printf("The even digit is: %d\n", rev);

    sum = Sum(rev);

    return sum;
}

int oddSum(int no){

    int r = 0, rev = 0,sum=0;
    int num = no;

    while(num>0){
        r = num % 10;
        if(r%2!=0){
            rev = (rev * 10) + r;
        }
        num /= 10;
    }

    printf("The odd digit is: %d\n", rev);

    sum = Sum(rev);

    return sum;

}

int Sum(int no){
    int num = no, r = 0,sum=0;
    while(num>0){
        r = num % 10;
        sum += r;
        num /= 10;
    }
    return sum;
}