#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,k,i;
	int max=-9999;
	scanf("%d",&n);
	int arr[10001]={0};
	for (i=0; i<n; i++)	{
		scanf("%d",&k);
		if (max<k) max=k;
		arr[k]++;
	}
//	for (i=1; i<=max; i++)
//		printf("%d\n",arr[i]);
	int arrMax=-99;
	int index;
	for (i=1; i<=max; i++){
		if (arrMax<=arr[i]) {
			arrMax=arr[i];
			index=i;	
		}
	}

	printf("%d %d\n",index,arrMax);
}
