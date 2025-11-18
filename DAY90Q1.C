#include <stdio.h>

// Define enum
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct that uses enum
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;

    // Assign values
    strcpy(p1.name, "Trishal");
    p1.gender = MALE;

    // Print gender using switch
    printf("Name: %s\n", p1.name);
    printf("Gender: ");

    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
