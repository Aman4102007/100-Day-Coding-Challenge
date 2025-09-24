// Program to find the second largest element in an array
#include<stdio.h>
int compare(const void *a, const void *b){
	return (*(int *)a - *(int *)b);
}

int getsecondLargest(int arr[], int n){
	
	qsort(arr, n, sizeof(int), compare);
	
	for (int i = n- 2; i >= 0; i--){
		
		if (arr[i] != arr[n - 1]){
			return arr[i];
		}
	}
	
	return -1;
}
int main(){
	int arr[] = {12, 35, 1, 10, 34, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", getsecondlargest(arr, n));
	return 0;
}
	
	

