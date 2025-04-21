// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999

#include<stdio.h>
#include<math.h>

int main(){
    int t,sum=0,c=0,temp=0;
    printf("enter terms: \n");
    scanf("%d", &t);

    // for (int i = 10; i <= pow(10,t);i*=10){
        
    //     printf("%d", i - 1);
    //     sum = sum + (i-1);
    //     printf(" ");

    // }

    int i = 10;

    while(c<t){
        printf("%d ", i-1);
        sum = sum + (i-1);
        i *= 10;
        c++;
    }

    printf("\n");

    printf("The sum is: %d", sum);

    return 0;
}