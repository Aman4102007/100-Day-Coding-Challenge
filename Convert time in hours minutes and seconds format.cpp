// Convert time in hours:minutes:seconds format
#include<stdio.h>
int main(){
	int total_seconds, hours, minutes, seconds;
	
	printf("Enter total time in seconds: ");
	scanf("%d", &total_seconds);
	
	hours = total_seconds / 3600;
	
	int remainig_seconds = total_seconds % 3600;
	
	minutes = remaining_seconds / 60;
	
	seconds = remaining_seconds % 60;
	
	printf("Time in HH:MM:SS format: %02d:%02d%02d\n", hours, minutes, seconds);
	
	return 0;
	
	
}
