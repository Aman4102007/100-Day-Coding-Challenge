// Program to check whether integer is postive negetive or zero using nested if else statement
#include<stdio.h>
int main(){
	double num;
	printf("Enter a number: ");
	scanf("%lf, &num");
	
	if (num > 0.0){
		printf("You entered a positive number.\n");
	} else {
		if (num == 0){
			printf("You entered 0.\n");
		} else{
			printf("You entered a negetive number.\n");
		}
	}
	
	return 0;
	
}
