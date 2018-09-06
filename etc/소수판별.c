#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	
	int i,sw=1;
	for (i=2; i*i<=n; i++){
		if (n%i==0) {
			sw=0; 
			break;
		}
	}
	if (sw==1) printf("소수입니다\n");
	else printf("소수가 아닙니다\n");
	return 0; 
} 
