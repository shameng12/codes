#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap elements
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array: ");
    displayArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted Array (Selection Sort): ");
    displayArray(arr, n);

    printf("\nTime Complexity of Selection Sort:\n");
    printf("Best Case   : O(n^2)\n");
    printf("Average Case: O(n^2)\n");
    printf("Worst Case  : O(n^2)\n");
    printf("\nSelection Sort is simple but inefficient for large datasets.\n");

    return 0;
}




🧩 Algorithm: Selection Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array elements arr[0..n-1]
Step 4: Repeat for i = 0 to n-2
  a) Set minIndex = i
  b) For each j = i+1 to n-1, if arr[j] < arr[minIndex], then set minIndex = j
  c) Swap arr[i] and arr[minIndex]
Step 5: Display the sorted array
Step 6: Print time complexity (O(n²) in all cases)
Step 7: Stop
