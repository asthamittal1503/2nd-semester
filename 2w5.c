#include <stdio.h>
#include <stdlib.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student *students;  // pointer to structure
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &(students[i].rollNo));
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // read string with spaces
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }

    // Display student details
    printf("\n--- Student Information ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    // Free allocated memory
    
	
	free(students);

    return 0;
}

