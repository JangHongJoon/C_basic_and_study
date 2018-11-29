#include <stdio.h>
int main(){
	int guess=0;
	
	while (getchar()!= 'y'){
		printf("%d\n",++guess);
		while (getchar()!='\n')
			continue;
	}
	printf("YTEWS~!");
} 	

