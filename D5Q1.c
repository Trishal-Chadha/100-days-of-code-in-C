#include <stdio.h>

int main() {
    float p, r, t, si, ci;

    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;                
    ci = p * (1 + r/100) * (1 + r/100) - p; 

    printf("SI = %.2f\n", si);
    printf("CI = %.2f\n", ci);

    return 0;
}
