#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // use long long for large results

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {   // step by 2 to get even numbers
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld", n, product);

    return 0;
}
