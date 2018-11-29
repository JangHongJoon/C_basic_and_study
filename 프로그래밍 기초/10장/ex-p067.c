#include <stdio.h>
double f(double u,double v);
int main(){
	double x,y;
	while (scanf("%lf %lf",&x,&y)==2){
		printf("%.3lf",f(x,y));
	}
}

double f(double u,double v){
	return 1/(((1/u)+(1/v))/2);
}
