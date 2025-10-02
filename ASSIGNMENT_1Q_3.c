#include <stdio.h>
int main() {
    char str[100];
    int result = 0;   
    printf("Enter an alphanumeric string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        }
    }
    result *= 2;
    printf("%d\n", result); 
    return 0;
}
