//Program to check if elements are distinct
#include <stdio.h>
#include <stdbool.h> // For using bool type

#define MAX_SIZE 10 // Define maximum size of the matrix

// Function to check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[][MAX_SIZE], int n) {
    if (n <= 1) { // A 1x1 matrix always has distinct diagonal elements
        return true;
    }

    // Assuming elements are within a reasonable range (e.g., 0-999)
    // Adjust FREQ_ARRAY_SIZE if your elements can be larger or negative
    const int FREQ_ARRAY_SIZE = 1000; 
    int frequency[FREQ_ARRAY_SIZE] = {0}; // Initialize frequency array to all zeros

    for (int i = 0; i < n; i++) {
        int diagonalElement = matrix[i][i];

        // Check if the element is within the valid range for our frequency array
        if (diagonalElement < 0 || diagonalElement >= FREQ_ARRAY_SIZE) {
            printf("Error: Diagonal element %d is out of frequency array range.\n", diagonalElement);
            return false; // Or handle this error appropriately
        }

        // If the element has already been encountered, it's not distinct
        if (frequency[diagonalElement] > 0) {
            return false;
        }
        frequency[diagonalElement]++; // Increment frequency
    }
    return true; // All diagonal elements are distinct
}

int main() {
    int n; // Size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix size. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("The elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}

