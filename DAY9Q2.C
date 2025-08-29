#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 33)
        printf("Pass\n");

    if (percentage < 33)
        printf("Fail\n");

    return 0;
}
