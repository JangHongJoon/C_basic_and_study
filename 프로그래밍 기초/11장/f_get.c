#include <stdio.h>
int main(){
	char words[14];
	puts("문자열을 입력하세요.");
	fgets(words,14,stdin);
	puts(words);
	fputs(words,stdout);
	
}
