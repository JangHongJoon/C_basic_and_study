#include <stdio.h>
//
//// �ΰ��� �Ű�����(����)�� ���� ��ȯ
//
//// � �������� ��ȯ?
//int plus(int a, int b){
//	return a+b; // return ���� ������ ���� �� 
//} 
//
//// main�� ��ȯ ���� ��� �� ���ư���?
//// -> �ڵ� return 0; �� �� 
//int main(){
//	/*
//	int a;
//	
//	a = printf("aaa\n"); //--> ��ȯ���� �����ٰ� ��
//	//��µ� ���ڵ��� ������ ��ȯ 
//	printf("%d\n" ,a); 
//	*/
//	
//	int sum = plus(3,5);
//	printf("%d\n",sum);
//}

void noMeaning(){
	printf("first\n");
	return ; // ������ ������ ��� �Լ��� ����ȴ�. 
	// ���� �ȵǴ� �ڵ尡 �� 
	printf("second\n");
	return 2;
	
}

int main(){
	int a;
	noMeaning();
	printf("��ȯ�� �� : %d\n" ,a); 
}
