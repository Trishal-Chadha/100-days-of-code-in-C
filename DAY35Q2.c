#include <stdio.h>

void reverse(int arr[], int l, int r) {
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++; r--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k %= n;  
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
