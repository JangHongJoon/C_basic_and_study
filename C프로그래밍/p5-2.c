 #include <stdio.h>
 int main(){
 	int x;
 	int *xp; //xp�� int ���� ������ ������ ����� 
 	
 	x=7; // ���� x �� �ʱ�ȭ 
 	xp=&x; //���� xp�� x�� �ּҰ����� �ʱ�ȭ
	
	printf("%p -> ���� x�� �ּ�\n",&x);
	printf("%d -> ���� x�� ��\n",x);
	printf("%p -> ������ ���� xp �� �ּ�\n",&xp);
	printf("%p -> �����ͺ��� xp �� ��\n",xp);
	printf("%d -> xp�� ����Ű�� ��\n",*xp);
 }
