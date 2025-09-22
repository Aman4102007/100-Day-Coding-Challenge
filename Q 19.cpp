// Program to identify characterstics of traingle
#include <stdio.h>

int main() {
    // Declare variables for the three sides of the triangle
    int side1, side2, side3;

    // Prompt the user to enter the lengths of the three sides
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if the given sides form a valid triangle (optional, but good practice)
    // This ensures the sum of any two sides is greater than the third side.
    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("The given lengths do not form a valid triangle.\n");
    } else {
        // Classify the triangle based on side lengths
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}

