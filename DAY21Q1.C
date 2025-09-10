#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;     
    temp = num;

    while (temp >= 10) { 
        temp /= 10;
        pow *= 10;
    }
    first = temp;

   
    num = num % pow;        
    num = num / 10;         
    int swapped = last * pow + num * 10 + first;

    printf("After swapping: %d\n", swapped);
    return 0;
}
