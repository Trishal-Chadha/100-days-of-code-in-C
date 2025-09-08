#include <stdio.h>

int main() {
    int a, b, x, y, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a; 
    y = b;

  
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

   
    lcm = (x * y) / a;

    printf("LCM = %d\n", lcm);

    return 0;
}
