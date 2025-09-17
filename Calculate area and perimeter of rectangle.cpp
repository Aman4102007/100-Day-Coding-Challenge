#include <stdio.h>

int main() {
    // Declare variables for length, width, area, and perimeter
    float length, width, area, perimeter;

    // Prompt the user to enter the length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length); // Read the length from the user

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width); // Read the width from the user

    // Calculate the area of the rectangle
    area = length * width;

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Display the calculated area and perimeter
    printf("Area of the rectangle is: %.2f\n", area);
    printf("Perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
