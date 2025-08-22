#include <stdio.h>
int main()
{
printf("Give length and breadth \n");
int length , breadth;
scanf("%d", &length);
scanf("%d",&breadth);
int area=length*breadth;
int perimeter=2*(length+breadth);
printf("the area is :%d \n" , area); 
printf("the perimeter is :%d \n" , perimeter);

return 0;
}