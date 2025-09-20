#include<stdio.h>

void check(char ch){
	
	if (ch >= 'A' && ch <= 'Z')
	    printf("\n%c is an uppercase character", ch);
	    
	    else if (ch >= 'a' && ch <= 'z')
	       printf("\n%c is an lowercase character", ch);
	       
	    else 
	        printf("\n%c is not an alphabetic character", ch);
}

int main(){
	char ch;
	
	ch = 'A';
	check(ch);
	
	ch = 'B';
	check(ch);
	
	ch = '0';
	check(ch);
	
	return 0;
}
