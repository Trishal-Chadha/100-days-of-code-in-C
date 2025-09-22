#include <stdio.h>
int main() {
    int n,a[100],k,l,h,m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    l=0; h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==k){ printf("Found at %d",m+1); return 0; }
        if(a[m]>k) h=m-1; else l=m+1;
    }
    printf("Not found");
}
