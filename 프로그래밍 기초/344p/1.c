#include <stdio.h>
int main(){
	int cntS=0,cntE=0,cntA=0;
	char ch;
	while ((ch=getchar())!='#'){
		if (ch==' ') cntS++;
		else if (ch=='\n') cntE++;
		else cntA++;
	}
	printf("%d %d %d\n",cntS,cntE,cntA);
} 
