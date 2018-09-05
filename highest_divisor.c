#include <stdio.h>
int c[100000];

int main(){
	int m,n,max=1,p=0;
	int i;
	
	scanf("%d %d",&m,&n);
	
	if (m<n) {
		int t; 
		t=n; 
		n=m; 
		m=t;	
	}
	
	for (i=1; i*i<=m; i++){
		if (m%i==0 && n%i==0) {
			c[p++]=i;
		}
	}
	
	int sw=0;
	for (i=p-1; i>=0; i--){
		int im=m/c[i];
		if (m%im==0 && n%im==0) {
			printf("%d ",i);
			max*=i;
		}
	}
	
	printf("\n%d\n",max);
} 
