#include <stdio.h>
int main(){
	int n,i;
	char food;
	
	double pound;
	double itemCost[3]={2.05,1.15,1.09};
	double itemTotal=0.0;
	double poundTotal=0.0;
	
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("\n%c %lf",&food,&pound);
		itemTotal+=(itemCost[food-97]*pound);
		poundTotal+=pound;
		//printf("%.2lf\n",itemTotal);
		
	}
	//printf("%.2lf",itemTotal);
	if (itemTotal>=100) itemTotal-=(itemTotal*0.05);
	
	if (poundTotal<5) itemTotal+=6.50;
	else if (5<=poundTotal && poundTotal<20) itemTotal+=14.00;
	else if (poundTotal>=20) itemTotal+=(14.00 + (poundTotal*0.50));
	
	printf("%.2lf",itemTotal);
	
}
