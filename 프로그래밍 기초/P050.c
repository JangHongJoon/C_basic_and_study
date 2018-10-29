#include <stdio.h>

#define SOLO 1
#define HEAD 2
#define TOG_PL 3
#define TOG_DI 4

#define taxR_per 0.15
#define taxO_per 0.28

int main(){
	int mode;
	double cash;
	double tax;
	
	double taxRate[5]={0.0,17850.0,23900.0,29750.0,14875.0};
		
	scanf("%d %lf",&mode,&cash);
	double im=0.0;
	int i;
	for (i=1; i<=4; i++) {
		if (mode == i){
			if (cash>taxRate[i]) im = cash-taxRate[i];
			else if (cash<=taxRate[i]) taxRate[i] = cash;
			tax=(taxRate[i]*taxR_per) + (im*taxO_per);
			break;
		}
		
	}
	
	printf("%.2lf",tax);
} 
