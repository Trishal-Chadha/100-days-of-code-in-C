#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]; i++)
        if(str[i]==' ') str[i]='-';

    printf("Modified string: %s", str);
    return 0;
}
