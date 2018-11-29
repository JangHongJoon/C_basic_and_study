#include <stdio.h>
int main(){
	unsigned long long arr[100][100]={1};
	int x,y;
	int i,j;
	scanf("%d %d",&x,&y);
	for (i=0; i<x; i++){
		for (j=0; j<=i; j++){
			if (j==0 || j==i) arr[i][j]=1;
			
			else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		
			
		}
	}
//	}
//	for (i=0; i<x; i++){
//		for (j=0; j<i+1; j++){
//			printf("%llu ",arr[i][j]);
//		}
//		printf("\n");
//	}

	printf("%llu",arr[x-1][y-1]);	

}
