#include <stdio.h>
int main() {
    int A[3][3], B[3][3], C[3][3]={0};
    printf("Enter 3x3 Matrix A:\n");
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d",&A[i][j]);
    printf("Enter 3x3 Matrix B:\n");
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d",&B[i][j]);

    for(int i=0;i<3;i++) for(int j=0;j<3;j++) 
        for(int k=0;k<3;k++) C[i][j]+=A[i][k]*B[k][j];

    printf("Result:\n");
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
}
