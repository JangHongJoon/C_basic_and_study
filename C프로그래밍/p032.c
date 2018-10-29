#include <stdio.h>
int main(){
	
	long long int sum;
	int n,m,i;
	while (1){
		scanf("%d %d",&n,&m);
		if (n>=m) break;
		for (i=n; i<=m; i++){
			sum+=(i*i);
		}
		printf("%lld\n",sum);
		sum=0;
	}	
} 
