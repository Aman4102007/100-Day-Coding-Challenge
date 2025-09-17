#include <stdio.h>

int main() {
    float num1, num2; // Declare two floating-point numbers
    float sum, difference, product, quotient; // Declare variables for results

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Calculate the difference
    difference = num1 - num2;

    // Calculate the product
    product = num1 * num2;

    // Calculate the quotient (handle division by zero)
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Indicate an error
    }

    // Display the results
    printf("\nResults:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0; // Indicate successful execution
)
