#include <stdio.h>

int main() {
    float cp, sp;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if(sp > cp) {
        printf("Profit = %.2f\n", sp - cp);
        printf("Profit %% = %.2f", ((sp - cp) / cp) * 100);
    }
    else if(cp > sp) {
        printf("Loss = %.2f\n", cp - sp);
        printf("Loss %% = %.2f", ((cp - sp) / cp) * 100);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
