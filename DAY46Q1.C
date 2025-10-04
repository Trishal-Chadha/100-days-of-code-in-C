#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower((unsigned char)c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;

    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') {
        s[--n] = '\0';
    }

    size_t write = 0;
    for (size_t read = 0; read < n; ++read) {
        if (!is_vowel(s[read])) {
            s[write++] = s[read];
        }
    }
    s[write] = '\0';

    printf("%s\n", s);
    return 0;
}
