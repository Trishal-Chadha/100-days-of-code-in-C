#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   


    while(str[count] != '\0') {
        count++;
    }

    printf("Total characters = %d\n", count);
    return 0;
}
