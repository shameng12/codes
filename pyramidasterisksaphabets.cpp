#include <stdio.h>

int main() {
    int n = 4;  // Fixed number of rows
    int i, j, space;
    char ch;

    // --- Pyramid with asterisks ---
    printf("Pyramid with asterisks:\n");
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // --- Pyramid with alphabets ---
    printf("\nPyramid with alphabets:\n");
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        ch = 'A';
        for (j = 1; j <= i; j++)
            printf("%c", ch++);
        ch -= 2;
        for (j = 1; j < i; j++)
            printf("%c", ch--);
        printf("\n");
    }

    return 0;
}





⚙️ Small Algorithm

Start

Set n = 4

For each row i = 1 to n:

Print spaces (n - i) times

Print 2*i - 1 asterisks → forms pyramid with *

For each row i = 1 to n:

Print spaces (n - i) times

Print alphabets from 'A' to the ith letter, then back to 'A' → forms pyramid with alphabets

Stop
