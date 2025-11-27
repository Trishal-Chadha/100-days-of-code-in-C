#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;          // normal structure variable
    struct Student *ptr;       // pointer to structure

    ptr = &s;                  // ptr now points to structure s

    // Modify structure members using -> operator
    ptr->roll = 101;
    ptr->marks = 87.5;

    // Display data using -> operator
    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
