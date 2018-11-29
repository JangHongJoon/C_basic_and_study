#include <stdio.h>

int compare(const void *p1, const void *p2);
int main(){
	int n;
	int i;
	int *arr = malloc(sizeof(int) * 1000000);
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	printf("%d",arr[1]);
	
	free(arr);
} 

int compare(const void *p1, const void *p2){
	const int * a = (const int *) p1;
	const int * b = (const int *) p2;
	
//	printf("%d %d\n",*a,*b);
	if (*a>*b) return 1;
	else if (*a==*b) return 0;
	else return -1;
}
