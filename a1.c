#include <stdio.h>
#include <math.h>

int main () {
	
	int num1 = 5;
	int num2 = 7;
	int num3 = 7;
	float num4 = 7.0;
	
	num1 += 2;
	num2 -= 3;
	
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3%2);
	//printf("%f\n", num4%2);
	printf("%f\n", fmod(num4,2));
	
}
