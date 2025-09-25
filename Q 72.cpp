// Program to find sum of all elements in a matrix
#include<stdio.h>
int main(){
	int rows, cols;
	long long sum = 0;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
	
	int matrix[rows][cols];
	printf("Enter the lements of the matrix:\n");
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			printf("Enter elements at position [%d][%d]: ",i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			sum += matrix[i][j];
		}
	}
	printf("The sum of elements in the matrix is: %lld\n", sum);
	
	return 0;
}

