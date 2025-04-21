// accept number of days from the user and calculate the charge for library according to followinng:
/*till five days: Rs 2/day
  Six to ten days: Rs 3/day
  11 to 15 days: Rs 4/day
  After 15 days: Rs 5/day
*/

#include<stdio.h>

int main(){
    int days;
    printf("enter days: \n");
    scanf("%d", &days);

    if(days<=5){
        printf("%d", days * 2);
    } else if(days>=6 && days<=10){
        printf("%d", days * 3);
    } else if(days>=11 && days<=15){
        printf("%d", days * 4);
    } else{
        printf("%d", days * 5);
    }
    return 0;
}