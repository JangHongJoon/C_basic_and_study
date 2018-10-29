#include <stdio.h>
#include <math.h> 
//int arr[10000000]={0};	
int main(){
	
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	int cnt=0,p=0;
	int im;
	int i,j,k;
	int arr[500000]={2};

	int sw=0;
 	
	scanf("%d",&n);
	im=n;

	for (i=2; i*i<n; i++){
		//printf("--%d\n",i);
		sw=0;
		for (k=0; k<=p; k++){
			//printf("%d : %d %d %d\n",k,i,arr[k],p);
			if (i%arr[k] && i!=2) 
			{
				sw=1;
				break;
			}
		}
		
		if (sw==0){
			arr[p]=i;
			for (j=i*i; j<=n; j+=i){
				//printf("%d\n",j);
				/*
				if (j>=10001) {
					//printf("***\n");
					sw=1;
				}
				*/
			//	printf("  %d",j);
				cnt++;
				
			}
			printf("\n");
			im-=cnt;
			cnt=0;
			p++;
			//sw=0;	
			}
		}
	
		//printf("*");
	
	
	printf("%d %d",im-2,p);
}
