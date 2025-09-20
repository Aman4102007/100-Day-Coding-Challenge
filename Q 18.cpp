// To calculate percentage(0-100)
#include<stdio.h>
int main(){
	int n;
	printf("Enter percentage: ");
	scanf("%d", &n);
	
	// 90 - 100 -> Grade A
	// 80 - 89 -> Grade B
	// 70 - 79 -> Grade C
	// 60 - 69 -> Grade D
	// Below 60 -> Fail
	if(n>90){
		printf("Grade A");
	}
	else if (n>80){
		printf("Grade B");
	}
	else if (n>70){
		printf("Grade C");
	}
	else if (n>60){
		printf("Grade D");
	}
	if (n<60){
		printf("Fail");
	}
	return 0;
}
