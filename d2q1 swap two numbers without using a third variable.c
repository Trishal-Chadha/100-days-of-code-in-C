#include <stdio.h>
int main() {
printf("enter any two numbers:");
int a,b;
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swap:a=%d,b=%d",a,b);








return 0;
}