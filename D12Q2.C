#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 5;
    else
        bill = 100 * 5 + (units - 100) * 7;

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}

