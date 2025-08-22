#include <stdio.h>

#define PI 3.1415926535

int main() {
    float radius, area, circumference;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");

    // Read the radius from the user
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Calculate the circumference of the circle
    circumference = 2 * PI * radius;

    // Display the calculated area and circumference
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}