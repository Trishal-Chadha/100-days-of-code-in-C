#include <stdio.h>

int main() {
    FILE *f;
    char name[50], c;

    printf("Enter file name: ");
    scanf("%s", name);

    f = fopen(name, "r");

    if (f == NULL)
        printf("File not found!\n");
    else {
        while ((c = fgetc(f)) != EOF)
            printf("%c", c);
    }

    return 0;
}
