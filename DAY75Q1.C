#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    
    printf("Enter the file name: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    getchar(); 
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
