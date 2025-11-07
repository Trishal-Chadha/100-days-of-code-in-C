#include <stdio.h>
int main() {
    FILE *f = fopen("numbers.txt", "r");
    int n, s = 0, c = 0;
    if (!f) return printf("File error\n"), 0;
    while (fscanf(f, "%d", &n) == 1) s += n, c++;
    fclose(f);
    printf("Sum=%d\nAvg=%.2f\n", s, c ? (float)s/c : 0);
}
