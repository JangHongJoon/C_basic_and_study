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

	����0�� �������� 1�� ����ϴ�.
	����1�� �������� 1�� ����ϴ�.
	����2�� �������� 1�� ����ϴ�.
	����3�� �������� 0�� ����ϴ�.
	����4�� �������� 2�� ����ϴ�.
	 
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
	scanf("%[^\n]" ,str); // %[^\n] --> ���� ���� ��� ���ڿ��� �޴´� 
	print_noSpace(str);
} 
