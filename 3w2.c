#include <stdio.h>

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i;

    // Input first sorted array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("\nEnter %d elements (sorted): ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("\nEnter size of second sorted array: ");
    scanf("%d", &n2);
    printf("\nEnter %d elements (sorted): ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    mergeArrays(arr1, n1, arr2, n2, merged);

    // Display merged array
    printf("\nMerged Sorted Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
