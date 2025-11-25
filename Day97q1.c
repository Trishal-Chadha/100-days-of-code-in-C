#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    // ------ WRITE DATA TO BINARY FILE ------
    fp = fopen("employee.dat", "wb");   // Open binary file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);  // write struct to file
    fclose(fp);

    printf("\nData written successfully to employee.dat\n");

    // ------ READ DATA FROM BINARY FILE ------
    fp = fopen("employee.dat", "rb");   // Open for reading binary
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);  // read struct from file
    fclose(fp);

    printf("\n----- Employee Details Read From File -----\n");
    printf("ID      : %d\n", emp_read.id);
    printf("Name    : %s\n", emp_read.name);
    printf("Salary  : %.2f\n", emp_read.salary);

    return 0;
}
