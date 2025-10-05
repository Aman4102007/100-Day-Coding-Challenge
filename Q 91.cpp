// Program to remove all vowels from string
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel(char c){
	c = toupper(c);
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

}

int main(){
	char str[100];
	int i, j = 0;
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str, "\n")]
	
	for (i = 0; str[i] != '\0'; i++){
		
		if (!isVowel(str[i])){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	printf("String after removing vowels: %s\n");
	
	return 0;
}
