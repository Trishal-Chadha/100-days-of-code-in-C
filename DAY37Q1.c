#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c], sum[r];

    for(int i=0;i<r;i++){
        sum[i]=0;
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }

    for(int i=0;i<r;i++)
        printf("Row %d sum = %d\n", i+1, sum[i]);
}
