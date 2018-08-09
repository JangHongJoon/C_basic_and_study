////1.
//#include <stdio.h>
//int parity(int n){
//	if (n*2==0) return 0;
//	else return 1;
//}
//
//int main(){
//	int n;
//	scanf("%d" ,&n);
//	printf("%d\n" ,parity(n));
//}

//2.
/*
	useCnt[ 1   \  1  \  1  \  0  \  2  \   \ ]

	슬롯0의 아이템을 1번 썼습니다.
	슬롯1의 아이템을 1번 썼습니다.
	슬롯2의 아이템을 1번 썼습니다.
	슬롯3의 아이템을 0번 썼습니다.
	슬롯4의 아이템을 2번 썼습니다.
	 
*/

//3.
/*
	5432112345
*/

//4.
#include <stdio.h>
#include <string.h>
void print_noSpace(char str[]){
	int i;
	for(i=0; i<strlen(str); i++){
		if (str[i]!=' '){
			printf("%c",str[i]);
		}
	}
}

int main(){
	char str[100];
	scanf("%[^\n]" ,str); // %[^\n] --> 엔터 빼고 모든 문자열을 받는다 
	print_noSpace(str);
} 
