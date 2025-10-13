#include <stdio.h>

int main() {
    int n, x;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;  // Sum of first n natural numbers
    int leftSum = 0;

    int found = 0;
    for (x = 1; x <= n; x++) {
        leftSum += x;  // Sum from 1 to x
        int rightSum = total - leftSum + x;  // Sum from x to n

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}
