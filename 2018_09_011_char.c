/*
	char -> 8bit
	"A" -> ���ڿ�
	'A' -> ����
	
	ex) char x='A';
	
	8bit �� ��Ÿ���� -128<char< 127 - >���� ó�� ���� 

	_Bool ��
	��ǻ��� ������ 
	true ->1
	false ->0 
	
	float, double �� 
	 
*/

#include <stdio.h>

int main(){
	float k=0.000000000012345678;
	 
	printf("%d : %c\n",'��','��');
	printf("%f %e\n",k,k);	

	float aboat = 32000.0;
	double abet = 2.14e9;
	printf("%f",aboat);


	

} 
