// compare two strings if equal print true else false
#include<stdio.h>

void cmpString(char[],char[]);

int main(){
    char str1[30],str2[30];

    printf("\nEnter string 1: ");
    gets(str1);

    printf("\nEnter string 2: ");
    gets(str2);

    cmpString(str1,str2);
    return 0;
}

void cmpString(char str1[],char str2[]){

    int i = 0, j = 0,flag=1;
    for (i = 0; str1[i] != '\0';i++){
        if(str1[i]!=str2[i]){
            flag = 0;
            break;
        }else{
            j++;
        }
    }
    if(j==strlen(str1)){
        printf("is equal\n");
    }else{
        printf("not equal");
    }
}