#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to return the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;   // returning structure
}

int main() {
    struct Student s[5];

    // Input details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Get top student
    struct Student topper = getTopStudent(s, 5);

    // Print top student details
    printf("\nTop Student Details:\n");
    printf("Name  : %s\n", topper.name);
    printf("Roll  : %d\n", topper.roll);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}
