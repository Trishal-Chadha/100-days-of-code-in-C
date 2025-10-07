#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = IHO KNstr[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);  

    int i = 0, start = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            int end = (str[i] == ' ') ? i - 1 : i;
            reverse(str, start, end);
            start = i + 1;
        }
        i++;
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
