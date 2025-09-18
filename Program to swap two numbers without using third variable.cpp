// Swap two number without use of third variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers to swap:\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using arithmetic operations
    a = a + b; // a now holds the sum of original a and b
    b = a - b; // b now holds the original value of a (sum - original b)
    a = a - b; // a now holds the original value of b (sum - original a)

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
