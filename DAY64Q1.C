#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // To store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);
    return 0;
}
