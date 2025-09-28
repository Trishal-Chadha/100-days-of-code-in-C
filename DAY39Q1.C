#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n][n], i, j, flag=1;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i][i]==a[j][j]) flag=0;

    if(flag) printf("Distinct\n");
    else     printf("Not Distinct\n");
}
