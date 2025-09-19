//  To count positive, negetive and zero in an array
#include<stdio.h>
int main(){
	int size, i;
	int positive_count = 0;
	int negetive_count = 0;
	int zero_count = 0;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("Enter the elements of the array:\n");
	for (i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}	
	
	for (i = 0; i < size; i++){
		if (arr[i] > 0){
			positive_count++;
		} else if(arr[i] < 0){
			negetive_count++;
		} else {
			zero_count++;
		}
	}
	
	printf("\nNumber of negetive elements: %d\n", positive_count);
	printf("Number of negetive elements: %d\n", negetive_count);
	printf("Number of zero elements: %d\n", zero_count);
	
	return 0;
}
