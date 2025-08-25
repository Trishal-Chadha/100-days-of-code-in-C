#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;   // p = principal, r = rate, t = time
    float si, ci;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    ci = p * pow((1 + r/100), t) - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
