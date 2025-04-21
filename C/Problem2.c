// wap to input number of seconds and find number of hours, min, and reSec

#include<stdio.h>

int main(){

    int sec;
    printf("enter seconds: \n");
    scanf("%d", &sec);
    int remainder = sec % 3600;

    printf("remainder: %d\n",remainder);

    int hr = sec / 3600;

    int min = (remainder) / 60;

    int reSec = (sec % 3600) % 60;

    printf("The hrs, min and reSec is %d:%d:%d", hr, min, reSec);
    return 0;
}