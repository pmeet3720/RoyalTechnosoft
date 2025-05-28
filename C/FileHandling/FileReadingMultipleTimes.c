#include<stdio.h>

void main(){
    FILE *fp;
    char c;

    fp = fopen("./FileHandling/Info.txt", "w+");

    fprintf(fp, "Meet Patel is SDE, age 22, Salary: 500000");

    int i = 0;
    while(i<5){
        fseek(fp, 0, SEEK_SET); // or frewind(fp)
        while((c=fgetc(fp))!=-1){
            printf("%c", c);
        }
        printf("\n");
        i++;
    }
    fclose(fp);
}