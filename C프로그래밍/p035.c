#include <stdio.h>
int main(){
	double own;
	double plus;
	int year;
	
	scanf("%lf %lf %d",&own,&plus,&year);
	int i;
	double ownCnt=own;
	for (i=2; i<=year+1; i++){
		//printf("%.5lf ",ownCnt);
		ownCnt=(ownCnt*plus)+ownCnt;
		//printf("%.5lf %.5lf\n",ownCnt,ownCnt*plus);
		
	}
	
	printf("%.5lf",ownCnt);
	
} 
