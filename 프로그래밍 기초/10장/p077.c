#include <stdio.h>
#include <float.h>
#include <math.h>
int main(){
	double a,b,c;
	double r,s;
	while(scanf("%lf %lf %lf",&a,&b,&c)==3){
		r=(((-1)*b)+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
		s=(((-1)*b)-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
		if (isnan(r)!=0 ||isnan(s)!=0) printf("Imaginary root\n");
		else if (r==s) printf("%.3lf\n",r);
		else printf("%.3lf %.3lf\n",r,s);
	}
	
}
