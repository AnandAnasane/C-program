    // WAP to print the stars in reverse order.


    #include <stdio.h>

    int main() {
        int i, j, k;
        int rows = 5;

        for (i = 0; i < rows; i++) {
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            for (k = 0; k < 2 * (rows - i) - 1; k++) {
                printf("*");
            }
            printf("\n");
        }

        return 0;
    }
