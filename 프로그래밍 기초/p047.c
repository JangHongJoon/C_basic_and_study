#include <stdio.h>
#include <string.h> 
int main(){
	char str[100];
	int codeRule;
	//�ڵ� ��Ģ �Է� , ���๮�� ������ �Է� �޴´�. 
	scanf("%d %[^\n]",&codeRule,str);
	


	//�׽�Ʈ 1. 
	//printf("%d %s",codeRule,str);
	
	//Ǯ��� �� ���ڿ� ���� 
	int endOf=strlen(str);
	
	//���ڿ� �� ���� ���鼭 ĭ �� ��ŭ ���� ��� (for)
	int i; // for �� ����
	for (i=0; i<endOf; i++){
		int im; //��ȣȭ ���� ������� ���� �ӽ� ���� ����
		 
		if (str[i]!=32) im=str[i]-codeRule;
		else im=str[i];
		//�׽�Ʈ 2. �迭 �� ���� Ȯ�� 
		//printf("%d : %c\n",str[i],str[i]);
		
		if (im<65 && im!=32) im=91-(65-im);
		 
		//�׽�Ʈ 3. ����ȭ Ȯ�� 
		//printf("%c\n",im);
		
		printf("%c",im); 
		
	} 
	
}
