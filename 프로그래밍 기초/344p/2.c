#include <stdio.h>
int main(){
	char ch;
	int i=0; 
	while ((ch=getchar())!='#'){
		if (i==8) {
			printf("\n");
			i=0;
		}
		i++;
		printf("%c %d ",ch,ch);
	}
} 
