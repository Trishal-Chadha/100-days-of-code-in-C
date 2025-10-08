#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);

    printf("Initials: ");
    printf("%c", name[0]); 

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            printf("%c", name[i + 1]); 
    }

    return 0;
}

