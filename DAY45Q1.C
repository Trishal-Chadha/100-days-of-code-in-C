#include <stdio.h>
int main() {
    char str[100], ch; int i, c=0;
    printf("Enter string: ");
    gets(str);
    printf("Enter character: ");
    scanf("%c",&ch);
    for(i=0; str[i]; i++)
        if(str[i]==ch) c++;
    printf("Frequency of '%c' = %d", ch, c);
}
