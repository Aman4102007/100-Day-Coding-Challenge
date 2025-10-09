// Program to change the date format
#include<stdio.h>
#include<time.h>

int main(){
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	
	char buffer[100];
	
	strftime(buffer, sizeof(buffer), "%d-%m-%y", t);
	printf("Formated date(DD-MM-YYYY): %s\n", buffer);
	
	strftime(buffer, sizeof(buffer), "%B %d, %y", t);
	printf("Formated date (Month DD, YYYY): %s\n", buffer);
	
	return 0;
}
