// C prograam to demonstare
// Conversion of Celcuis scale to Fareinheit scale
#include<stdio.h>
float CtoF(float C){
	
	// Using the conversion formula
	return((C * 9/5) + 32);
}

int main(){
	
	float C = 0;
	
	printf("%0.2f",CtoF(C));
	
	return 0;
}
