#include <stdio.h>
int main(){
	
	int i,j,sw=1;
	int cnt=0;
	
	for (j=1; j<=1000000; j++){
		for (i=2; i*i<=j; i++){
			if (j%i==0) {
					sw=0; 
					break;
				}
			}
		if (sw==1) cnt++;
		sw=1;	
	}
	
	printf("1부터 1000000까지 소수 개수 : %d",cnt);
	return 0; 
} 
