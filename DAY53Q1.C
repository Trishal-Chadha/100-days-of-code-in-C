#include <stdio.h>

int main() {
    int a, b, sum, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);

    return 0;
}
