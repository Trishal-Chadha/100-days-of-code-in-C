#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);

    int sum=0, max=0;
    for(int i=0;i<k;i++) sum+=arr[i];
    max=sum;

    for(int i=k;i<n;i++) {
        sum+=arr[i]-arr[i-k];
        if(sum>max) max=sum;
    }
    printf("%d",max);
    return 0;
}
