#include <stdio.h>

int main() {
    int m, n, i=0, j=0, k=0;
    scanf("%d", &m);
    int a[m]; for(int x=0;x<m;x++) scanf("%d",&a[x]);
    scanf("%d", &n);
    int b[n]; for(int x=0;x<n;x++) scanf("%d",&b[x]);
    int c[m+n];
    while(i<m && j<n) c[k++] = (a[i]<b[j]) ? a[i++] : b[j++];
    while(i<m) c[k++] = a[i++];
    while(j<n) c[k++] = b[j++];
    for(int x=0;x<m+n;x++) printf("%d ", c[x]);
}
