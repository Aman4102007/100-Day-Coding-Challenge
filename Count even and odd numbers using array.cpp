// Program to count even and odd numbers using array
#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter %d elements of the array:\n", size);
	for (int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	int evencount = 0;
	int oddcount = 0;
	
	for (int i = 0; i < size; i++){
		if (arr[i] % 2 == 0){
			evencount++;
		}else{
			oddcount++;
		}
	}
	
	printf("\nTotal Even numbers: %d\n", evencount);
	printf("Total Odd numbers: %d\n", oddcount);
	
	return 0;
}
