// ������ (pointer) ����Ű��
// 					������ �ּҸ� �����ϴ� ���� 
// 			a [20]
//	 _>	�ּ� : 1152
//  |
// ptr [1152]

#include <stdio.h>
int main(){
	int a= 20;
	char c = 'h'; 
	
	int *ptr_a; // �����ʹ� �տ� * �� ������ 
	char *ptr_c;
	
	ptr_a = &a; //scanf("%d" ,<<&a>>);  a�� �ּҰ� ����
	
	printf("%d\n",ptr_a); // a�� �ּҰ� ���
							//  �ּҰ��� ���� �ȵ� 

	printf("a�� �� : %d\n",a); // a�� ����� �� 
	printf("a�� �ּҰ�: %d\n", &a); // a�� �ּ� ��  
	printf("ptr_a�� ����� �� : %d\n" ,ptr_a); // a�� �ּҰ�  
	printf("ptr_a�� ����Ű�� ������ �� : %d\n" ,*ptr_a); 
	// a�� ����� �� ( * �� ���� �ּҸ� ������ ������ ���� ���)
	
	printf("\n\n"); 
	
	a=10;
	int b=20;
	
	int *ptr;
	
	ptr=&a;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n" ,*ptr);
	
	ptr =&b;
	printf("ptr�� ����Ű��  ������ ����� �� : %d\n" ,*ptr);
	
	printf("\n\n");
	
	ptr=&a;
	*ptr = 20; // *ptr �� a �� �ǰ� a�� 20�� �ִ� ��;
	printf("%d\n" ,a);
	
	
	printf("\n\n");
	
	a=10;
	
	int **ptr_ptr; // �����͸� ����Ű�� ������ 
	ptr_ptr = &ptr;
	
	printf(" a= %d\n",a);
	printf(" &a= %d\n",&a);
	
	printf(" ptr= %d\n",ptr);
	printf(" &ptr= %d\n",&ptr);
	
	printf(" ptr_ptr= %d\n",ptr_ptr);
	printf(" *ptr_ptr= %d\n",*ptr_ptr); 
	printf(" **ptr_ptr= %d\n" ,**ptr_ptr);
	 
	 
}
 
