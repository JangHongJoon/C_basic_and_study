#include <stdio.h>
#include <math.h> 
	
int main(){
	
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	int cnt=0,p=0;
	int im;
	int i,j,k=0;
	int arr[4000]={2};
	int sw=0;
 	
	scanf("%d",&n);

	for (i=2; i<sqrt(n); i++){
		sw=0;
		//printf("%d : ",i);
		for (j=0; j<p; j++){
			//printf("%d ",arr[j]);
			if (i%arr[j]==0){
				//printf("%d\n",i);
				sw=1;
				break;
			}	
		}
		//printf("\n");
		if (sw==0){
			//printf("*");
			
			//printf("%d : \n",i);
			for (j=i*i; j<=n; j+=i){
				
				for (k=0; k<p; k++){
					if (i!=2){
						//printf("%d ",arr[k]);
						if (j%arr[k]==0){
							sw=1;
							break;
						}
					}
				}
					if (sw==0){
						//printf("  %d\n",j);
						cnt=cnt+1;
					}
					sw=0;
			}
			arr[p]=i;
			p+=1;
		}
		//printf("%d (%d))\n",cnt,p);
		//printf("\n");
		//printf("--%d : %d %d \n",i,cnt,p);
		//sw=0;
		k=0;
	}
		
	printf("%d",n-cnt-1);

}
	


