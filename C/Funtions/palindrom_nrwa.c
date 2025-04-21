// check palindrome with NR-WA

#include<stdio.h>

void isPalindrome(int num);

int main(){
    int no;
    printf("\nEnter number: ");
    scanf("%d", &no);

    isPalindrome(no);
    return 0;
}

void isPalindrome(int num){
    int flag = 0,temp=0,rev=0;
    int no = num;
    while(no>0){
        temp = no % 10;
        rev = (rev * 10) + temp;
        no /= 10;
    }

    if(rev == num){
        printf("is Palindrom\n");
    }else{
        printf("not a plaindrome");
    }
}