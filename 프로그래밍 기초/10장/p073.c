#include <stdio.h>
#include <stdlib.h>
int compare(const void *p1, const void *p2);
int main(){
	int i=0,j=0;
	int *arr = malloc(sizeof(int) * 100000);
	while (scanf("%d",&arr[i])==1){
		i++;
	}
//	
//	for (j=0; j<i; j++){
//		printf("%d ",arr[j]);
//	}
	//printf("\n");	
	qsort(arr,i,sizeof(int),compare);
	printf("%d\n",arr[0]);
//
//	for (j=0; j<i; j++){
//		printf("%d ",arr[j]);
//	}	
}
 

int compare(const void *p1, const void *p2){
	const int a = *(int *)p1;
	const int b = *(int *)p2;
	if (a<b) return 1;
	else if (a==b) return 0;
	else return -1;
}
