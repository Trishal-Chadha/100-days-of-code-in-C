#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;   // Rs. 5 per unit for first 100 units
    else
        bill = 100 * 5 + (units - 100) * 7; // Rs. 7 per unit after 100 units

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}

