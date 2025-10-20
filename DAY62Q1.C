#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr_max = arr[0];

    for(int i = 1; i < n; i++) {
        if (curr_max + arr[i] < arr[i])
            curr_max = arr[i];
        else
            curr_max += arr[i];

        if (curr_max > max_so_far)
            max_so_far = curr_max;
    }

    printf("%d", max_so_far);
    return 0;
}
