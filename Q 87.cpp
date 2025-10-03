#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[100];
	int i;
	int spaces = 0;
	int digits = 0;
	int special_chars = 0;
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str, "\n")] = 0;
	for (i = 0; str[i] != '\0'; i++){
		if (isdigit(str[i])){
			digits++;
		}else if (isspace(str[i])){
			spaces++;
		}else if (ispunct(str[i])){
			special_chars++;
		}
	}
	printf("Number of spaces: %d\n", spaces);
	printf("Number of digits: %d\n", digits);
	printf("Number of special characters: %d\n", special_chars);
	
	return 0;
}
