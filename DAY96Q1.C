#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure with joining date as nested structure
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;  // nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &
