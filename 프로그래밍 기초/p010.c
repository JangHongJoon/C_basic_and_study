#include <stdio.h>
int main(){
	float quart;
	scanf("%f",&quart);
	quart*=(float)950;
	quart/=3.0e-23;
	printf("%e",quart);
	
	return 0;
} 
