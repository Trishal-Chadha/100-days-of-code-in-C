#include <stdio.h>
#include <string.h>

int main() {
    char s[100]; int i, l, f=1;
    fgets(s,100,stdin);
    l=strlen(s)-1; if(s[l]=='\n') s[l--]='\0';
    for(i=0;i<l/2;i++) if(s[i]!=s[l-1-i]) f=0;
    printf(f?"Palindrome":"Not Palindrome");
}
