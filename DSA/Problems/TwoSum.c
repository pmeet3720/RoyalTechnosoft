#include<stdio.h>
#include<stdlib.h>

int *twoSum(int *nums, int numSize, int target, int *returnSize);

void main(){
    int n;
    printf("\nEnter sise of nums: ");
    scanf("%d", &n);
    int nums[n];
    int target;
    for (int i = 0; i < n;i++){
        printf("\nEnter nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    printf("\nEnter target: ");
    scanf("%d", &target);

    int *sol = twoSum(&nums, n, target, &n);
    for (int i = 0; i < n;i++){
        printf("%d ", sol[i]);
    }
}