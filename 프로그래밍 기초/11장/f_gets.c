#include <stdio.h>
#define MAX 10
int main(){
	char name[10];
	while (fgets(name,MAX,stdin) != NULL && name[0] != '\n')
		fputs(name,stdout);
	// 10개만 받으라고 했지만 
	// 10개씩 쌓임 엔터 때 한꺼번에 버퍼에서 비워줌  
	
	puts("Done\n");
}
