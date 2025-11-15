#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Example: set role here (you can change this value)
    r = ADMIN;

    switch(r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! Please login for more features.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
