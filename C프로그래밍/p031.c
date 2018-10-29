#include <stdio.h>
int main(){
	float n,m;
	while(scanf("%f %f",&n, &m) != 0){
		//printf("%.1f",n);
		printf("%.3f\n",(n-m)/(n*m));
	}
} 
