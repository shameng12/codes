#include <stdio.h>

int main() {
    int n = 4;  // Fixed number of rows
    int i, j, space;
    char ch;

    // 1. Right-angle triangle with numbers
    printf("\nRight-angle triangle with numbers:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 2. Diamond with numbers
    printf("\nDiamond with numbers:\n");
    // Upper half
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    // 3. Pyramid with asterisks
    printf("\nPyramid with asterisks:\n");
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // 4. Pyramid with alphabets
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




⚙️ Algorithm (Simplified)

Start

Set n = 4

Right-angle triangle with numbers:

For each row i = 1 to n

Print numbers from 1 to i

Diamond with numbers:

For i = 1 to n, print spaces and then numbers 1 to i (upper part)

For i = n-1 down to 1, print spaces and then numbers 1 to i (lower part)

Pyramid with asterisks:

For each row i = 1 to n

Print spaces and then 2*i - 1 stars (*)

Pyramid with alphabets:

For each row i = 1 to n

Print spaces, then increasing alphabets from A to i

Then print decreasing alphabets back to A

Stop

