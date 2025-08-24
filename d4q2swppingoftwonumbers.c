#include <stdio.h>
int main() {
printf("enter a number:");
int a,i,sum=0;
scanf("%d",&a);
for(i=1;i<=a;i++) {
    sum +=i;
}
printf("the sum of n natural number is :%d",sum);

 return 0;
}