#include <stdio.h>

enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Weekday day;

    const char *names[] = {
        "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"
    };

    for (day = MONDAY; day <= SUNDAY; day++) {
        printf("%s = %d\n", names[day - 1], day);
    }

    return 0;
}
