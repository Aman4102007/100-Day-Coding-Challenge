// Program to reverse a string
#include<stdio.h>
#include<string.h>

void reverseString(char str[]){
	int start = 0;
	int end = strlen(str) - 1;
	char temp;
	
	while (start < end){
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		
		start++;
		end--;
	}
}
int main(){
	char str[100];
	printf("Entera string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Original string: %s\n", str);
	reverseString(str);
	printf("Reversed string: %s\n", str);
	
	return 0;
}

