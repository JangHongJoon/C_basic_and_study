#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b);
int main(){
	
	int n,i;
	
	scanf("%d",&n);
	int *arr = malloc(sizeof(int) * n);
	
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}	
	qsort(arr,n,sizeof(int),compare);
//	for (i=0; i<n; i++){
//		printf("%d ",arr[i]);
//	}	
//	printf("\n");
	if (n%2==1) printf("%d",arr[n/2]); 
	else if (n%2==0) printf("%.1lf",(double)(arr[n/2-1]+arr[n/2])/2);
}

int compare(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
