#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    int id;
    char *name;    // allocated separately
    Gender gender;
    float salary;
} Employee;

/* helper to print gender as text */
const char* gender_to_str(Gender g) {
    switch (g) {
        case MALE:   return "Male";
        case FEMALE: return "Female";
        default:     return "Other";
    }
}

int main(void) {
    /* --- Part A: allocate one Employee dynamically --- */
    Employee *e = malloc(sizeof(Employee));
    if (!e) {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    /* allocate space for name and fill fields */
    const char *tmpname = "Trishal Chadha";
    e->name = malloc(strlen(tmpname) + 1);
    if (!e->name) {
        fprintf(stderr, "malloc failed for name\n");
        free(e);
        return 1;
    }
    strcpy(e->name, tmpname);

    e->id = 590022141;
    e->gender = MALE;
    e->salary = 15000.0f;

    printf("---- Single Employee (dynamically allocated) ----\n");
    printf("ID: %d\nName: %s\nGender: %s\nSalary: %.2f\n\n",
           e->id, e->name, gender_to_str(e->gender), e->salary);

    /* cleanup single employee */
    free(e->name);
    free(e);

    /* --- Part B: allocate an array of Employees dynamically --- */
    size_t n = 3;
    Employee *arr = malloc(n * sizeof(Employee));
    if (!arr) {
        fprintf(stderr, "malloc failed for array\n");
        return 1;
    }

    /* For each Employee allocate name buffer and initialize */
    const char *names[] = {"Aditi Jain", "Lucky Rana", "Rahul Kakkar"};
    Gender genders[] = {FEMALE, OTHER, MALE};
    int ids[] = {590025058, 590023129, 590025987};
    float salaries[] = {12000.0f, 10000.0f, 18000.0f};

    for (size_t i = 0; i < n; ++i) {
        arr[i].id = ids[i];
        arr[i].gender = genders[i];
        arr[i].salary = salaries[i];

        arr[i].name = malloc(strlen(names[i]) + 1);
        if (!arr[i].name) {
            fprintf(stderr, "malloc failed for arr[%zu].name\n", i);
            /* free previously allocated names then arr */
            for (size_t j = 0; j < i; ++j) free(arr[j].name);
            free(arr);
            return 1;
        }
        strcpy(arr[i].name, names[i]);
    }

    printf("---- Employee Array (dynamically allocated) ----\n");
    for (size_t i = 0; i < n; ++i) {
        printf("Employee %zu:\n", i+1);
        printf("  ID: %d\n", arr[i].id);
        printf("  Name: %s\n", arr[i].name);
        printf("  Gender: %s\n", gender_to_str(arr[i].gender));
        printf("  Salary: %.2f\n\n", arr[i].salary);
    }

    /* cleanup array */
    for (size_t i = 0; i < n; ++i) free(arr[i].name);
    free(arr);

    return 0;
}
