#include <stdio.h>

int main(){
	int n,m;
	int i;
	scanf("%d %d",&n,&m);
	
	for (i=n; i<=m; i++){
		printf("%d %d %d\n",i,i*i,i*i*i);
	}	
} 
