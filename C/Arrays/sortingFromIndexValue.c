// sort the array of range index provided by user
#include<stdio.h>

int main(){
    int a[10], temp = 0, i, j,s,e,b[10];
    printf("enter start index: ");
    scanf("%d", &s);
    printf("enter end index: ");
    scanf("%d", &e);

    printf("\n");
    for (i = 0; i < 10;i++){
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int id = s; id < e;id++){
        for (j = s; j < e;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (i = 0; i < 10;i++){
        printf("a[%d]: %d\n", i,a[i]);
    }

        return 0;
}

// scan 10 size array and print sum of each digit
// scan 10 size array and print numbers in descending order