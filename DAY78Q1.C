#include <stdio.h>
#include <ctype.h>  

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");   
    fout = fopen("output.txt", "w"); 

    if (fin == NULL || fout == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {   
        ch = toupper(ch);                
        fputc(ch, fout);                 
    }

    printf("Conversion completed. Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
