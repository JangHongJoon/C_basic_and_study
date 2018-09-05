#include <stdio.h>

int c[1000000];

int main(){
	int a,p=0,i;
	
	
	scanf("%d",&a);
	
	for (i=1; i*i<=a; i++){
		if (a%i==0) {
			printf("%d ",i);
			c[p++]=i;
		}
	}
	
	int sw=0;
	for (i=p-1; i>=0; i--){
		if (c[i] != a/c[i])printf("%d ",a/c[i]);
		else sw=1;
	}
	printf("\n%d\n",p*2-sw);
} 
