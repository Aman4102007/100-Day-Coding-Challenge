// Function to find the most frequent digit in a number
#include<stdio.h>
int findmostFrequentDigit(long int num){
	if (num < 0){
		num = -num;
	}
	int digitCount[10] = {0};
	if (num == 0){
		return 0;
	}
	while (num > 0) {
		int digit = num % 10;
		digitCount[digit]++;
		num /= 10;
	}
	int mostFrequentDigit = 0;
	int macCount = 0;
	for (int i = 0; i < 10; i++){
		if (digitcount[i] > maxcount){
			maxcount = digitcount[i];
			mostFrequentDigit = i;
		}
	}
	return mosFrequentDigit;
}
int main(){
	long int number;
	
	printf("Enter an integr number: ");
	scanf("%d", &number);
	
	int frequentDigit = findMostFrequentDigit(number);
	printf("The digit that occurs the most times in %ld is: %d\n", number, frequentDigit);
	
	return 0;
}
}
