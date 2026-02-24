#include <stdio.h>

// Define structure for distance
struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Input second distance
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Add distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // Convert inches to feet if >= 12
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

    // Display result
    printf("\nSum of distances = %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}
