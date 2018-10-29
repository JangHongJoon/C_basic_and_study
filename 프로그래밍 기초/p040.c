#include <stdio.h>
int main(){
	float hourLabor;
	float extra=0;
	float totalIn=0;
	
	scanf("%f",&hourLabor);
	if (hourLabor>40) {
		extra=hourLabor-40.0;
		hourLabor-=extra;
	}
	totalIn=(hourLabor*10)+(extra*10*1.5);
	printf("%.2f " ,totalIn);
	
	float im,k;
	float tax;
	if (totalIn>=300) k=300;
	else k=totalIn;
	im=totalIn;
	
	tax+=(k*0.15);
	im-=k;
	
	if (im>=150) k=150;
	else k=im;		
	//printf("%.2f",totalIn);
	tax+=(k*0.2);
	im-=k;	
	
	if (im>0){
		k=im;
		tax+=(k*0.25);
		im-=k;
	}
	
	printf("%.2f ",tax);
	printf("%.2f",totalIn-tax);
} 
