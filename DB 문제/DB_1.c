#include <stdio.h>
#include <stdlib.h>
int compare(const void *k1, const void *k2);

int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	int a[101];
	int n,i,j,k; 
	int max=-9999;
	
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),compare);

	for (i=0; i<n-2; i++){
		for (j=i+1; j<n-1; j++){
			for (k=j+1; k<n; k++){
				
				if (a[i]+a[j]>a[k]){
					if (max<a[i]+a[j]+a[k]){
						max=a[i]+a[j]+a[k];
					}
				}
			
			}
		}
	}
	
	if (max!=-9999) printf("%d",max);
	else printf("0");
}


int compare(const void *k1, const void *k2){
	return (*(int*)k1-*(int*)k2);
}
