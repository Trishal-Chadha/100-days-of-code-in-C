#include <stdio.h>

int main() {
    FILE *f;
    char name[50];
    int roll, n;
    float marks;

    f = fopen("students.txt", "w");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(f, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(f);

    f = fopen("students.txt", "r");
    while (fscanf(f, "%s %d %f", name, &roll, &marks) == 3)
        printf("%s %d %.2f\n", name, roll, marks);
    fclose(f);
}
