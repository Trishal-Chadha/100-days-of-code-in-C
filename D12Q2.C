#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;
        case '/':
            result = a / b;   // integer division
            printf("Result = %d", result);
            break;
        case '%':
            result = a % b;
            printf("Result = %d", result);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
