#include <stdio.h>
#define MAX 10
int main(){
	char name[10];
	while (fgets(name,MAX,stdin) != NULL && name[0] != '\n')
		fputs(name,stdout);
	// 10���� ������� ������ 
	// 10���� ���� ���� �� �Ѳ����� ���ۿ��� �����  
	
	puts("Done\n");
}
