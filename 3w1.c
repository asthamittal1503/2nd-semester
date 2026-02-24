#include <stdio.h>

#define SIZE 25

// Function prototypes
void createArray(int arr[], int *n);
void displayArray(int arr[], int n);
void deleteBeginning(int arr[], int *n);
void deleteMiddle(int arr[], int *n);
void deleteEnd(int arr[], int *n);
void insertAtPosition(int arr[], int *n, int pos, int element);

int main() {
    int arr[SIZE];
    int n = 0;  // current number of elements
    int choice, pos, element;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Delete Beginning\n");
        printf("4. Delete Middle\n");
        printf("5. Delete End\n");
        printf("6. Insert at Position\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                deleteBeginning(arr, &n);
                break;
            case 4:
                deleteMiddle(arr, &n);
                break;
            case 5:
                deleteEnd(arr, &n);
                break;
            case 6:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                printf("Enter element: ");
                scanf("%d", &element);
                insertAtPosition(arr, &n, pos, element);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

// Function to create array
void createArray(int arr[], int *n) {
    int i;
    printf("Enter number of elements (max %d): ", SIZE);
    scanf("%d", n);

    if (*n > SIZE) {
        printf("Size exceeds limit!\n");
        *n = 0;
        return;
    }

    printf("Enter %d elements:\n", *n);
    for (i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display array
void displayArray(int arr[], int n) {
    int i;
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete element at beginning
void deleteBeginning(int arr[], int *n) {
    int i;
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Deleted element at beginning.\n");
}

// Function to delete element at middle
void deleteMiddle(int arr[], int *n) {
    int i, mid;
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    mid = *n / 2;  // middle index
    for (i = mid; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Deleted element at middle.\n");
}

// Function to delete element at end
void deleteEnd(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    (*n)--;
    printf("Deleted element at end.\n");
}

// Function to insert element at position
void insertAtPosition(int arr[], int *n, int pos, int element) {
    int i;
    if (*n == SIZE) {
        printf("Array is full!\n");
        return;
    }
    if (pos < 1 || pos > *n + 1) {
        printf("Invalid position!\n");
        return;
    }
    for (i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    (*n)++;
    printf("Inserted %d at position %d.\n", element, pos);
}
