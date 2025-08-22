#include <stdio.h>
int main()
{
printf("give temprature in celsius \n");
float celcius;
scanf("%f",&celcius);
float farenhite= (celcius * 9/5) + 32;
printf("the value of temprature in fahranite is :%f",farenhite);


return 0;
}