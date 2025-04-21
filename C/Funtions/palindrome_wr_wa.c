#include<stdio.h>

int isPalindrome(int num);

int main(){
    int num, result;
    printf("\nenter number: ");
    scanf("%d", &num);

    result = isPalindrome(num);

    if(result==1){
        printf("is palindrome");
    }else{
        printf("not a palindrome");
    }
    return 0;
}

int isPalindrome(int num){
    int r = 0, rev = 0;
    int no = num;

    while(no>0){
        r = no % 10;
        rev = (rev * 10) + r;
        no /= 10;
    }

    if(rev==num){
        return 1;
    }
    return 0;
}