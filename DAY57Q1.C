#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Check all elements to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        printf("%d", prevGreater);
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
