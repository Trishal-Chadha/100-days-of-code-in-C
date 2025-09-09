#include <stdio.h>
int main() {
    int n, d, p = 1, f = 0;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        d = n % 10;
        if (d % 2) { p *= d; f = 1; }
        n /= 10;
    }
    if (f) printf("%d", p);
    else   printf("No odd digits");
    return 0;
}
