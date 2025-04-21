// digit reverse and check palindrome
// 123 to 321 reverse
// 1221 rev==no palindrome

#include<stdio.h>

int main(){
    int no, no1, temp = 0, rev = 0;
    printf("enter digit: \n");
    scanf("%d", &no);

    no1 = no;

    while(no>0){
        temp = no % 10;  //123 3 2 1
        rev = (rev * 10) + temp; // 0, 32, 321
        no = no / 10; // 12 1 0
    }
    printf("reverse digit: %d\n", rev);
    if(rev==no1){
        printf("digit is palindrome\n");
    }else{
        printf("not a plaindrome\n");
    }
    
    return 0;
}