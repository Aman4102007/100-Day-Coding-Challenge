// Program to rotate an array by K positions
#include<stdio.h>

void leftRotatebyone(int arr[], int n){
	int temp = arr[0];
	for (int i = 0; i < n - 1; i++){
		arr[i] = arr[i+1];
	}
	arr[n - 1 ]= temp;
}

void leftrotate(int arr[], int d, int n){
	for (int i = 0; i < d; i++){
		leftRotateByOne(arr, n);
	}
}

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[] = {5, 1, 2, 3, 4, 5, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;
	
	leftrotate(arr, d, n);
	printf("Array after rotated by %d positions is: ", d);
	printArray(arr, n);
	
	return 0;
}
