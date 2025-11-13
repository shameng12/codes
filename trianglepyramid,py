#include <stdio.h>

int main() {
    int n = 7+, i, j;
    char ch = 'A';

    // 1?? Right-angle triangle with numbers
    printf("Right-angle triangle:\n");
    for (i = 1; i <= n; i++, printf("\n"))
        for (j = 1; j <= i; j++) printf("%d ", j);

    // 2?? Diamond shape with numbers
    printf("\nDiamond shape:\n");
    for (i = 1; i <= n; i++, printf("\n")) {
        for (j = i; j < n; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("%d ", i);
    }
    for (i = n - 1; i >= 1; i--, printf("\n")) {
        for (j = n; j > i; j--) printf(" ");
        for (j = 1; j <= i; j++) printf("%d ", i);
    }

    // 3?? Alphabet pyramid
    printf("\nAlphabet pyramid:\n");
    for (i = 1; i <= n; i++, ch++, printf("\n")) {
        for (j = i; j < n; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("%c ", ch);
    }

    return 0;
}
