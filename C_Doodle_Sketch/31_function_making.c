#include <stdio.h>

// main, printf --> �Լ�
// main --> () ���� {��ɾ�}
// printf --> () ���� ���� 

// main �Լ� ����  (�ڷ����� �Բ�) 


//�������� 
int itemCnt = 0;
int money = 100;


void buyItem(int cost, int cnt){ //�Ű����� 
	itemCnt+=cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�. \n");
	printf(" ������ ���� : %d\n" ,itemCnt);
	printf(" �ܾ� : %d\n ", money);
	
} 

int main(){
	//printf �Լ� ȣ�� 
	printf("Hello, World\n"); // --> <stdio.h> �� ���� �Ǿ� ���� 
	
	//�������� 
	int a; 
	
	// {} ���� �������� �ۿ����� {} �ۿ����� �� �� ����. 
	buyItem(30,5);
	
	buyItem(50,7);
}


