#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE = 2,
    TIMEOUT = 3
};

int main() {
    enum Status result;

    printf("Enter status code (1 = SUCCESS, 2 = FAILURE, 3 = TIMEOUT): ");
    scanf("%d", &result);

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;

        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out. Check your network or server.\n");
            break;

        default:
            printf("Invalid status code!\n");
    }

    return 0;
}
