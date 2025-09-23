#include <stdio.h>
int main() {
    int a[100], n, pos, val;
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&pos,&val);

    for(int i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val; n++;

    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
