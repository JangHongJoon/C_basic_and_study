#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d" ,&a ,&b);
	
	
	//bool ������ ����� ���� (1����Ʈ) 
	int p = a > b;
	int q = a < b;
	int r = a == b;
	
	printf("%d %d %d\n",p,q,r); 
}

//bool �� �� ������ ������ �Ұ� ?
