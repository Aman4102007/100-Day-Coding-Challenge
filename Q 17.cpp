// Program to find quadratic equation
#include<stdio.h>
#include<math.h>

void findroots(int a, int b, int c){
	if (a == 0){
		printf("imaginary");
		return;
	}
	int D = b * b -4 * a * c;
	if (D < 0){
		printf("imaginary");
		return;
	}
	int sqrtD = (int)sqrt(D);
	
	int r1 = (int)floor((-b + sqrtD) / (2.0 * a));
	int r2 = (int)floor((-b + sqrtD) / (2.0 * a));
	
	if (r1 < r2){
		int temp = r1;
		r1 = r2;
		r2 = temp;
	}
	printf("%d %d", r1, r2);
	
	int main(){
		int a = 1, b = -7, c = 12;
		findRoots(a, b, c);
		
	}
	return 0;
}
