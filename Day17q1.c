#include <stdio.h>
#include <math.h>

int main() {
    int n, t, r, c = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (t = n; t; t /= 10) c++;              
    for (t = n; t; t /= 10) {                 
        r = t % 10;
        sum += pow(r, c);
    }

    if (sum == n) printf("Armstrong");
    else printf("Not Armstrong");

    return 0;
}
