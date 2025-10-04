// Program to find frequency in a given characters
#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	char targetChar;
	int count = 0;
	int i = 0;
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Enter the characters to count: ");
	scanf("%c", &targetChar);
	
	while (str[i] != '\0'){
		if(str[i] == targetChar){
			count++;
		}
		i++;
	}
	printf("The character '%c' appears %d times in the string.\n", targetChar, count );
	
	return 0;
}

