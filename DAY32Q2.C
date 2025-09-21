#include <stdio.h>

int main() {
    long num;
    int freq[10] = {0}, digit, max=0, ans=0;

    scanf("%ld", &num);

    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(int i=0; i<10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }

    printf("Most frequent digit = %d (occurs %d times)", ans, max);
    return 0;
}
