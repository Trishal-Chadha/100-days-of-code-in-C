#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input window size k
    printf("Enter size of subarray (k): ");
    scanf("%d", &k);
    
    // Process each subarray window
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        
        // Find max in current window
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        
        printf("%d ", max);
    }
    
    return 0;
}
