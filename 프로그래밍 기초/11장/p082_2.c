#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,i,j;
	int *a=malloc(sizeof(int) * 100000);
	int *b=malloc(sizeof(int) * 100000);
	int ima,imb;
	int max=-1;
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			ima=abs(a[i]-a[j]);
			imb=abs(b[i]-b[j]);
			
			if ((ima+imb)>max) max=ima+imb;
		}
	}
	printf("%d",max);
}
