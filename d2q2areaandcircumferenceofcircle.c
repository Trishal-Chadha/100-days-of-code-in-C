#include <stdio.h>
int main() {
printf("enter radius of a circle");
float r;
#define PI 3.14159265359
scanf("%f",&r);
float area=PI*r*r;
float circumference= 2*PI*r;
printf("Area:%.2f,Circumference=%.2f",area,circumference);

    return 0;
}