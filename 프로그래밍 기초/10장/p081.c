#include <stdio.h>
#include <stdlib.h>
int compare(const void *p1, const void *p2);
int main(){
	int i=0;
	int n,k1,k2,k3;
	int *arr = malloc(sizeof(int) * 1000000);
	scanf("%d %d %d %d",&n,&k1,&k2,&k3); 
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}	
	qsort(arr,n,sizeof(int),compare);
	printf("%d",arr[k1-1]+arr[k2-1]+arr[k3-1]);
}
 

int compare(const void *p1, const void *p2){
	const int a = *(int *)p1;
	const int b = *(int *)p2;
	if (a>b) return 1;
	else if (a==b) return 0;
	else return -1;
}
