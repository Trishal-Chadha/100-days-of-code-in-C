#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // easy input (not safest, but fine for small programs)

    // make first letter uppercase (if lowercase)
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;  // convert to uppercase
    }

    // make all other letters lowercase
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
