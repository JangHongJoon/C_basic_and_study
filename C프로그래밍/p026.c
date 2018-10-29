#include <stdio.h>
int main(){
	float own,per,cash;
	scanf("%f %f %f",&own,&per,&cash);
	float kk;
	kk=per*0.01;
	int cnt=0;
	
	if (kk==cash || kk>cash){
		printf("NO");
		return 0;
	}
	
	while (1){
		own=(own*kk)+own;
		own-=cash;
		cnt++;
		
		printf("%d : %.2f %.2f\n",cnt,own*kk,own);
		if (own<=0) break;
	}
	printf("%d\n",cnt);
} 
