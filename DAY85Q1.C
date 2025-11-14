#include <stdio.h>

enum Operation {
    ADD = 10,
    SUBTRACT = 20,
    MULTIPLY = 30
};

int main() {

    printf("Enum values:\n");
    printf("ADD = %d\n", ADD);
    printf("SUBTRACT = %d\n", SUBTRACT);
    printf("MULTIPLY = %d\n", MULTIPLY);

    return 0;
}

