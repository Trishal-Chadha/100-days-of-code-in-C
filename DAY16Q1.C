#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; S

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 0;
    while (num > 0) {
        binary[i] = num % 2; 
        num = num / 2;       
        i++;
    }

    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
