#include <stdio.h>

double f(double u, double v);
int main(){
	double x,y;
	while ((scanf("%lf %lf",&x,&y))==2){
		printf("%.3lf\n" ,f(x,y));
	}
	
}

double f(double u, double v){
	double i;
	double j;
	i=1.0/u;
	j=1.0/v;
	//printf("%.3lf,%.3lf %.3lf: ",i,j,(i+j)/2.0);
	return 1.0/((i+j)/2.0);
}
