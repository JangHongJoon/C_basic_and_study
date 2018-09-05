#include <stdio.h>
int main(){
	int m,n,r=1;
	int i;
	
	scanf("%d %d",&m,&n);
	
	if (m<n) {int t; t=n; n=m; m=t;}
	
	for (i=1; i*i<=m; i++){
		if (m%i==0 && n%i==0) r*=i;
	}
	printf("%d\n",r);
} 
