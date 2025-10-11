#include <stdio.h>
#include <math.h>

int main() {
    int n, t, r, c = 0, s = 0;
    scanf("%d", &n);
    for (t = n; t; t /= 10) c++;
    for (t = n; t; t /= 10) s += pow(t % 10, c);
    printf("%s", s == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
