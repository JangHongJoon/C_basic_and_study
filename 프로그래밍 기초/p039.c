#include <stdio.h>
int main(){
	char c,d;
	int cnt=0,im=0;
	
	while(c!='#'){
		c=getchar();
		if (c=='e'){
			c=getchar();
			if (c=='i') cnt++;
		}
		
	}
	
	printf("%d",cnt);
	
}
