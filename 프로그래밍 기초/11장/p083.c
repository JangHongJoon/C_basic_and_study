 #include <stdio.h>
char arr[1000][1000];
int main(){
 	int n,m;
 	int i,j;
	int im=0;
	int max=-1;
	scanf("%d %d",&n,&m);
 	for (i=0; i<n; i++){
 		for (j=0; j<m; j++){
 			scanf("\n%c",&arr[i][j]);
		 }
	}
	int x,y;
	for (i=1; i<n-1; i++){
		for (j=1; j<m-1; j++){
			for (x=i-1; x<i-1+3; x++){
				for (y=j-1; y<j-1+3; y++){
					im+=(arr[x][y]-48);
//					printf("%d ",arr[x][y]-48);
				}
//				printf("\n");
			}
//			printf("%d\n\n",im-(arr[i][j]-48));
			if ((im-(arr[i][j]-48))>max) max=im-(arr[i][j]-48);
			im=0;
		}
	}
	printf("%d",max);
}
