#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add the distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // Convert excess inches to feet
    while (sum.inches >= 12.0) {
        sum.feet++;
        sum.inches -= 12.0;
    }

    printf("\nTotal distance: %d feet %.1f inches\n", sum.feet, sum.inches);

    return 0;
}
