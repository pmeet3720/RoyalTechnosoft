// WAP to find areas and circumference of various shapes (circle, triangle and square)

#include<stdio.h>

int main(){
    float areaC, cir, areaT, perT, areaS, perS;
    float radius, tb,th, sSide;
    float a, b, c;
    float pi = 3.14;

    printf("enter radius of circle: \n");
    scanf("%f", &radius);

    areaC = pi * radius * radius;
    cir = 2 * pi * radius;

    

    printf("enter base and height of triangle: \n");
    scanf("%f", tb);
    scanf("%f", th);
    printf("enter sides of triangle a,b and c: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    areaT = 0.5 * tb * th;
    perT = a + b + c;

    printf("enter side of square: \n");
    scanf("%f", &sSide);

    areaS = sSide * sSide;
    perS = 4 * sSide;

    printf("area and circumference of circle is: %.2f and %.2f \n", areaC, cir);

    printf("area and perimeter of triangle is: %.2f and %.2f \n", areaT, perT);

    printf("area and perimeter of square is: %.2f and %.2f \n", areaS, perS);

    return 0;
}