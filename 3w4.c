#include <stdio.h>

int main() {
    int arr[10], n, index, i;
    int *ptr;  // pointer to integer

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer points to the first element of the array
    ptr = arr;

    printf("Enter index (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
    } else {
        // Using pointer arithmetic to access element
        printf("Element at index %d = %d\n", index, *(ptr + index));
    }

    return 0;
}
