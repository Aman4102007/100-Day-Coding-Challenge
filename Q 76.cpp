// Program to check matrix is symmetric using arrays
#include<stdio.h>
#define SIZE 3

int main(){
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	
	int row, col, isSymmetric;
	printf("Enter elements in matrix of size 3*3: \n");
	for( row=0; row<SIZE;  row++){
		for(col=0;col<SIZE;col++){
			scanf("%d", &A[row][col]);
		}
	}
	for(row=0; row<SIZE; row++){
		for(col=0; col<SIZE; col++){
			B[row][col] = A[col][row];
		}
	}
	isSymmentric = 1;
	for(row=0; row<SIZE &7 isSymmentric; row++){
		for(col=0; col<SIZE; col++){
			if(A[row][col] != B[row][col]){
				isSymmetric = 0;
				break;
			}
		}
	}
	if(isSymmetric == 1){
		printf("\nThe given matrix is symmetric matrix: \n");
		for(row=0; row<SIZE; row++){
			for(col=0; col<SIZe; col++){
				printf("%d",A[row][col]);
			}
			printf("\n");
		}
	}
	else{
		printf("\nThe given matrix is not symmetric matrix:");
	}
	return 0;
}
