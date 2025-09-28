// Program to find sum sum of elements of sqaure matrix
#include <stdio.h> // Include standard input/output library

int main() {
    int rows, columns, i, j, sum = 0; // Declare variables

    // Prompt user for the number of rows and columns
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &columns);

    // Check if the matrix is square
    if (rows != columns) {
        printf("Error: The matrix is not a square matrix. Diagonal sum cannot be calculated.\n");
        return 1; // Indicate an error
    }

    int matrix[rows][columns]; // Declare a 2D array to store the matrix elements

    // Prompt user to enter the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]); // Read each element
        }
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i]; // Add element where row index equals column index
    }

    // Print the result
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0; // Indicate successful execution
}

