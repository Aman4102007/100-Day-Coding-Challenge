#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159; // Using a more precise value for PI

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");

    // Read the radius from the user
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Calculate the circumference of the circle
    circumference = 2 * PI * radius;

    // Display the calculated area and circumference
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
