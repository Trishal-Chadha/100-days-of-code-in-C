#include <stdio.h>

int main() {
    int n, i, key, a[100];
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d", &key);

    // shift elements to make space
    i=n-1;
    while(i>=0 && a[i]>key) {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;  // insert element
    n++;

    for(i=0;i<n;i++) printf("%d ",a[i]);
}
