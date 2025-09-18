#include <stdio.h>

int main() {
    int i, j, space, rows = 4;

    for (i = 1; i <= rows; i++) {
<<<<<<< HEAD
        
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
    
=======
      
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
  
>>>>>>> 02bb6f12383991fb361ce2769a9aeb82cb5a9818
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

   
    for (i = rows - 1; i >= 1; i--) {
        
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
      
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
