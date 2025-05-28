#include<stdio.h>

void main(){
    FILE *fp;

    fp = fopen("./FileHandling/earth.txt","w");

    fprintf(fp,"Meet 22 90");
    printf("File created and written");

    fclose(fp);
}