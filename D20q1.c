#include <stdio.h>
int main() {
    int n, d, prod = 1, found = 0;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n) {
        d = n % 10;
        if (d % 2) { prod *= d; found = 1; }
        n /= 10;
    }
    if (found) printf("%d", prod);
    else printf("No odd digits");
    return 0;
}
