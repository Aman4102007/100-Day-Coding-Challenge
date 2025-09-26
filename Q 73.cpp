// Program to find sum of each row and store in an array
#include<stdio.h>

int main(){
	int rows, cols;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
	
	int matrix[rows][cols];
	int row_sum[rows];
	
	printf("Enter the elements of the matrix:\n");
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			printf("Enter the elements at[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i=0;i<rows;i++){
		int current_row_sum = 0;
		for(int j=0;j<cols;j++){
			current_row_sum += matrix[i][j];
		}
		row_sums[i] = current_row_sum;
	}
	printf("\nsum of each row:\n");
	for(int i=0;i<rows;i++){
		printf("Row %d sum: %d\n", i + 1, row_sum[i]);
	}
	return 0;
	
}
