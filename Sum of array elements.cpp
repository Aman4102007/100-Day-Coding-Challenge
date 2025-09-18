#include<stdio.h>
int getsum(int arr[],int n){
	
	// Initialize sum to 0
	int sum = 0;
	for (int i =0; i < n; i++){
		
		// Add each element to sum
		sum += arr[i];
	}
	return sum;
	
}
int main(){
	int arr[] = {4, 2, 4, 6, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Find the sum
	int res = getsum(arr, n);
	
	printf("%d", res);
	return 0;
	
}
