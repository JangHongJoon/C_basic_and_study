#include <stdio.h>
#include <strdlib.h> // for exit() 
int main(){
	// ���� - ������ ����Ǿ� �ִ� �޸�
	// low-level I/O
	// standard I/O package
	
	//��Ʈ�� = ������ �Է��̳� ����� ���ǵ� �������� �帧
	//Ű���� �Է� - stdin, stdout (C���α׷��� ���� �ڵ����� ������ ����ó�� �ٷ����)
	
	/*
		EOF - ��ǻ�Ϳ��� �� �̻� ���� ���� ���� ���� �ǹ� (-1, End Of File)
		
		* char �� unsigned  �� �ν� �� ���� �ִ� 
		�׷��� EOF �� ���� int �� ���� ���� 
	*/
	
	int ch; 
	FILE * fp // ������ ����ϱ� ���� ��
	printf("Enter the name of the file: ");
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("Failed\n");
		exit(1);
	}
	
	while ((ch == getc(fp)) != EOF)
		putchar(ch);
	
	fclose(fp); // close the file
	return 0;
}
