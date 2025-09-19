// To calculate simple and compund interest
#include<stdio.h>
#include<math.h>

int main(){
	float principal, rate, time;
	float simple_interst, compound_interest;
	
	printf("Enter the principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter the annual rate of interest: ");
	scanf("%f", &rate);
	
	printf("Enter the time period: ");
	scanf("%f", &time);
	
	// Calculate Simple interest
	simple_interst = (principal * rate * time)/100;
	
	// Calculate Compound interest
	compound_interest = principal * (pow((1 + rate/100), time)) - principal;
	
	printf("\nsimple interst: %.2f\n", simple_interest);
	printf("Compoud Interest: %.2f\n", compound_interest);
	
	return 0;
}
