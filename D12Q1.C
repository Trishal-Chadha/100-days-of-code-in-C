#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 1;   // Rs. 1 per day
    } 
    else if (days <= 10) {
        fine = 5 + (days - 5) * 2;   // Rs. 2 per day after 5 days
    } 
    else {
        fine = 5 + 10 + (days - 10) * 5;  // Rs. 5 per day after 10 days
    }

    printf("Total Fine = Rs. %d", fine);

    return 0;
}
