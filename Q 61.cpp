// Program to implement linear search
#include<stdio.h>

int linearsearch(int* arr, int n, int key){
	
	for (int i = 0; i < n; i++){
		if (arr[i] == key){
			return i;
		}
	}
	
	return -1;
}

int main(){
	int arr[] = { 4, 10, 20, 30, 40, 25 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;
	
	int i = linearsearch(arr, n, key);
	
	if (i == -1)
	    printf("Key not found");
	else
	    printf("Key found at index: %d", i);
	    
	return 0;
}
