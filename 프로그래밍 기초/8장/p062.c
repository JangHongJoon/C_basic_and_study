#include <stdio.h>
int main(){
	
	int cntN=0,cntS=0,cntE=0;
	int ch;
	
	while ((ch=getchar()) != EOF){
		if (ch =='\n') {
			cntN++;	
		}
		else if (ch==' ') {
			cntS++;	
		}
		else {
			cntE++;	
		}
	}
	printf("%d %d %d",cntS,cntN,cntE);
}
