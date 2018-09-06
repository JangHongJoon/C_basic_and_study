#include <stdio.h>
int div(int a, int b){
	if (a%b==0)
		return b;
	else
		return div(b,a%b);
}

int main(){
	int numOfn;
	int n[1000];
	int i,result;
	
	scanf("%d",&numOfn);
	for (i=0; i<numOfn; i++){
		scanf("%d",&n[i]);
	}
	
	result=n[0];
	for (i=1; i<numOfn; i++){
		result=div(result,n[i]);
	}
	printf("%d\n",result);
	return 0;
} 

