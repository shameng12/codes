#include <stdio.h>

void insertionSort(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    int a[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    insertionSort(a, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nBest:O(n) Avg/Worst:O(n^2)\n");
    return 0;
}




🧩 Algorithm: Insertion Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array elements a[0..n-1]
Step 4: For i = 1 to n-1
  a) Set key = a[i] and j = i - 1
  b) While j >= 0 and a[j] > key, shift a[j] to a[j + 1] and decrement j
  c) Insert key at position a[j + 1]
Step 5: Print sorted array
Step 6: Stop
