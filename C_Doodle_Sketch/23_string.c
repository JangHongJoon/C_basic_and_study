#include <stdio.h>
#include <string.h>
/*
int main(){
	char arr[] = "Hello,world!"; 
	//sizeof(arr) ����ϸ� 13 �� ��� : �� �ڿ� NULL ��  
	printf("%d\n" ,sizeof(arr)); 
	printf("%s\n",arr); //%s ���ڿ� ���  
} 
*/

int main(){
	char s[100];
	char str2[100];
	char str[]="Hello";
	scanf("%s",s);
	printf("%s\n",s);
	
	int len = strlen(str);
	printf("%d\n",len);
	
	strcpy(str2,str); 
	// ���ڿ� ��ü ���� -> �տ� �޴� �迭, �ڿ� ���� 
	printf("%s\n",str2);
	
	strcat(str,"World!"); 
	// ���� ���ڿ� �ڿ� �ٸ� ���ڿ� ������ �Լ�  
	printf("%s\n" ,str);
	
	int cmp= strcmp(str,str2);
	 // ������ ���� ������ �Լ� 
	 printf("%d\n",cmp); 
}
