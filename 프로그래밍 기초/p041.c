#include <stdio.h>
//int count[10000000000]={0};
int main(){
	int n;
	int i;
	int cnt=0;	
	scanf("%d",&n);
	
	for (i=1; i*i<=n; i++){
		if (n%i==0 && i*i!=n){
			cnt+=2;
			//printf("%d %d * ",n,i);
		}
		
		if (i*i==n){
			cnt++;
			//printf("%d **",i);
		}
	}
	printf("%d",cnt-2);

}
