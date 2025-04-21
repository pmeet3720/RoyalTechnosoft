// inbuilt string concat function
#include<stdio.h>

int main(){
    char fname[10], lname[10], fullname[30];
    printf("\nEnter first name: ");
    gets(fname);

    printf("\nEnter last name: ");
    gets(lname);

    strcpy(fullname,strcat(strcat(fname," "),lname));

    // strcat(fname, ' ');
    // strcpy(fullname, fname);
    // strcat(fullname, lname);

    printf("FullName: %s", fullname);

    return 0;
}