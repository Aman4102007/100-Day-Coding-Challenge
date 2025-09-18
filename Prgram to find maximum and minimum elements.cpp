// function to find maximum and minimum element in an array
void findMinMax(int arr[], int n, int *max, int *min){
	
	// Assuming first element as minimum and maximum
	*max = arr[0];
	*min = arr[0];
	
	for (int i = 1; i < n; i++){
		
		// update max if arr[i] is larger
		if(arr[i] > *max)
		   *max = arr[i];
		   
		   // Update min if arr[i] os smaller
		   if (arr[i] < *min)
		       *min = arr[i];
	     }
}

int main(){
	int arr[] = {5, 2, 1, 4, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max, min;
	
	// Finding minimum and maximum values in arr
	findMinMax(arr, n, &max, &min);
	
	printf("%d\n", max);
	printf("%d\n", min);
	return 0;
}
