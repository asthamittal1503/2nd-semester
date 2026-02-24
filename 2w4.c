#include <stdio.h>

// Define structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate difference
struct Time difference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert both times to seconds
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int totalDiff = seconds1 - seconds2;

    // If negative, make positive (absolute difference)
    if (totalDiff < 0) {
        totalDiff = -totalDiff;
    }

    // Convert back to HH:MM:SS
    diff.hours = totalDiff / 3600;
    totalDiff %= 3600;
    diff.minutes = totalDiff / 60;
    diff.seconds = totalDiff % 60;

    return diff;
}

int main() {
    struct Time t1, t2, diff;

    // Input first time
    printf("Enter first time (HH MM SS): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input second time
    printf("Enter second time (HH MM SS): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Calculate difference
    diff = difference(t1, t2);

    // Display result
    printf("\nDifference = %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
