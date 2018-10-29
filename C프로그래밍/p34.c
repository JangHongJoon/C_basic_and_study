#include <stdio.h>
int main(){
	int n;
	
	
	scanf("%d",&n);
	
	double sum=1;
	double msum=1;
	int sw=0;
	double i;
	for (i=2.0; i<=n; i++) {
		//printf("%.2f : ",1.0/i);
		
		sum+=(1/i);
		
		if (sw==0){
			msum-=(double)(1/i);
			sw=1;
		}
		else {
			msum+=(double)(1/i);
			sw=0;
		}
		//printf("%.5lf %.5lf\n",sum,msum);
	}
	printf("%.5lf %.5lf",sum,msum);
	
} 
