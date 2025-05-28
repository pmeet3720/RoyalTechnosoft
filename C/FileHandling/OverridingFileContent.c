#include<stdio.h>

void main(){
    FILE *fp;
    char c;

    fp = fopen("./FileHandling/lang.txt", "w+");

    fprintf(fp, "This is C   language");

    fseek(fp, 8, SEEK_SET);

    fprintf(fp, "C++");

    fseek(fp, 0, SEEK_SET);

    while((c = fgetc(fp))!=-1){
        printf("%c", c);
    }

    fclose(fp);
}