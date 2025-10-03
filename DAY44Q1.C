#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, spaces=0, digits=0, special=0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]; i++) {
        if(str[i]==' ') spaces++;
        else if(isdigit(str[i])) digits++;
        else if(!isalpha(str[i]) && str[i]!='\n') special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
}
