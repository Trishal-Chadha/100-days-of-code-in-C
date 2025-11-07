#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r"), *out = fopen("output.txt", "w");
    char c;
    if (!in || !out) return printf("File error!\n"), 1;
    while ((c = fgetc(in)) != EOF) fputc(toupper(c), out);
    printf("Done.\n");
    fclose(in); fclose(out);
}
