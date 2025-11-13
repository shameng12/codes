#include <stdio.h>

// User-defined function for Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nBest: O(n), Average/Worst: O(n^2)\n");
    return 0;
}



🧩 Algorithm: Bubble Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array elements arr[0..n-1]
Step 4: Repeat for i = 0 to n-2
  Repeat for j = 0 to n-i-2
   If arr[j] > arr[j+1], swap them
Step 5: Display the sorted array
Step 6: Stop
