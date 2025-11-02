#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (with one repeated):\n", n);
    
    int xorAll = 0;  // Will store XOR of all numbers and indices

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xorAll ^= arr[i];   // XOR of all array elements
        xorAll ^= i;        // XOR of indices 0 to n-1
    }

    printf("The repeated element is: %d\n", xorAll);

    return 0;
}
