#include <stdio.h>

int main() {
    int n, d, t, s = 0, f, i;
    scanf("%d", &n);
    for (t = n; t > 0; t /= 10) {
        d = t % 10;
        f = 1;
        for (i = 1; i <= d; i++) f *= i;
        s += f;
    }
    printf(s == n ? "Strong" : "Not Strong");
    return 0;
}
