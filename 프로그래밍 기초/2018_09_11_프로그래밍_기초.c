/*

Keywords :
 - int, short, long, unsigned, char, float, double, _Bool, _Complex, _imaginary ��...
 
 	C��� ���� data type -> ����	 
	 Python : d ���� data type
	 
	 data => �� - ���� 
	 			- �Ǽ� 123.56 -> 0.12356 *( 10�� 3��) 
				 
				  
	 �������� �ε� �Ҽ����� 
	 	- Integer (������) 
	 		�޸� -> 	0 0 0 0 0 1 1 1
	 			
		- Floating - point (�ε� �Ҽ�����) -> float �� 
		
			��ȣ   �Ǽ� �κ� 
 			+  3  .314159 -> 314.159  
		  sign exponent fraction 
		  
		  1. 1 1111...
		  2. 1 1�Ǻ���
		  3. 1 2�Ǻ��� 
		  
		  
		  int ������ ����
		  short (int), long (int), long long (int), unsigned (int),
		  16it,        32bit,    64bit,            ������ �ȵ�, �� ��� �þ
		  
		  
		  
		 
		overflow -> ���� 
		
		int i = 2147483647;
	unsigned int j = 4294967295;
	
	printf("%d %d %d\n",i ,i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);
	
	result : 
	
		   
	printf���� 
	%d , %u -> ��� �ؼ��� 
	
	long long ���
	123L, 020L, 0X10L 
*/


#include <stdio.h>

int main(){
	
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig;
	
	printf("big = %ld and not %hd\n",big,big);
	return 0;
} 
