#include <stdio.h>
#include <stdlib.h>
int a[1001][1001];
int check[1001][1001];
int main(){
	
	int n,m;
	int i,j;
	int max=-99999;
	long long int cnt=0;
	int takeI,takeJ;
	scanf("%d %d" ,&n,&m);	
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf("%d",&a[i][j]);
			//printf("%d\n",a[i][j]);
			cnt+=(a[i][j]);
			if (a[i][j]>max) {
				max=a[i][j];
				takeI=i;
				takeJ=j;
			}
		}
		//printf("%d \n",max);
		cnt-=max;
		check[takeI][takeJ]=-1;
		max=-99999;
	}
	
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			if (a[j][i]>max) {
				max=a[j][i];
				takeI=i;
				takeJ=j;
			}
		}
		//printf("%d \n",max);
		if (check[takeJ][takeI]!=-1) cnt-=max;
		max=-99999;
	}
	
	printf("%lld\n",cnt);
		
}
