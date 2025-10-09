#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%s", date);

    // Extract parts
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    // Replace month number with abbreviation
    if (strcmp(month, "04") == 0)
        strcpy(month, "Apr");

    // Display new format
    printf("New date format: %s-%s-%s\n", day, month, year);

    return 0;
}
