#include <stdio.h>
int main(){
	int ch;
	int cntB=0,cntS=0;
	while ((ch=getchar())!=EOF){
		if ('A'<=ch && 'Z'>=ch) cntB++;
		if ('a'<=ch && 'z'>=ch) cntS++;
		
	}
	printf("%d %d",cntB,cntS);
}
