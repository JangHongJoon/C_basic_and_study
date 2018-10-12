#include <stdio.h>
int main(){
	int n, sum=0;
	
	printf("A point\n");
	printf("B point\n");
	
	for (n=0; n<=100; n++){
		printf("C point\n");
		sum = sum + n;
		printf("n : %d\tsum : %d\n",n,sum);
	}
	printf("D point\n");
}
