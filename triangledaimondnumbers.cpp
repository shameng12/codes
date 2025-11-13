#include <stdio.h>

int main() {
    int n = 4;  // Fixed number of rows
    int i, j, space;

    // --- Right-angle triangle with numbers ---
    printf("Right-angle triangle with numbers:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // --- Diamond with numbers ---
    printf("\nDiamond with numbers:\n");

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}




🧮 Small Algorithm

Start

Set n = 4

For each row i = 1 to n, print numbers from 1 to i → forms right-angle triangle

For each row i = 1 to n, print spaces and then numbers 1 to i → upper part of diamond

For each row i = n-1 down to 1, print spaces and then numbers 1 to i → lower part of diamond

Stop
