#include<stdio.h>

void main(){
    FILE *fp;
    char c;

    fp = fopen("./FileHandling/earth.txt", "r");

    while((c = fgetc(fp))!=-1){
        printf("%c", c);
    }

    fclose(fp);
}