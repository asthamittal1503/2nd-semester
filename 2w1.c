#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Array of structures

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--- Student Information ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
