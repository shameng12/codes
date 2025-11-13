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




🧮 Algorithm

Step 1: Start the program.
Step 2: Initialize the variable n = 4 (number of rows fixed).
Step 3: Declare loop control variables i, j, and space, and a character variable ch.

Part 1: Right-angle triangle with numbers

Step 4:
  a. Loop i from 1 to n (for each row).
  b. Inside this loop, loop j from 1 to i and print j.
  c. Move to the next line after each row.

Part 2: Diamond with numbers

Step 5: Print the upper half of the diamond
  a. Loop i from 1 to n.
  b. Print spaces (n - i times).
  c. Print numbers from 1 to i.
  d. Move to the next line.

Step 6: Print the lower half of the diamond
  a. Loop i from n - 1 down to 1.
  b. Print spaces (n - i times).
  c. Print numbers from 1 to i.
  d. Move to the next line.

Part 3: Pyramid with asterisks

Step 7:
  a. Loop i from 1 to n.
  b. Print spaces (n - i times).
  c. Print 2*i - 1 asterisks (*).
  d. Move to the next line.

Part 4: Pyramid with alphabets

Step 8:
  a. Loop i from 1 to n.
  b. Print spaces (n - i times).
  c. Initialize ch = 'A'.
  d. Print increasing alphabets from 'A' up to the ith character.
  e. Then print decreasing alphabets from the previous character back to 'A'.
  f. Move to the next line.
