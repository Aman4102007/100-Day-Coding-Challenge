// Print the largest number among three numbers
#include<stdio.h>
int main(){
	
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	int b;
	printf("Enter a number: ");
	scanf("%d", &b);
	
	int c;
	printf("Enter a number: ");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("Thhe number is the largest number");
	}
	else{
		printf("The number is not the largest number");
	}
	return 0;
}
