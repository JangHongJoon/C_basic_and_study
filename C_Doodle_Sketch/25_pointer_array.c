#include <stdio.h>

int main(){
	int a=10;
	int *ptr_a =&a;
	
	printf("ptr_a �� �� : %d\n" ,ptr_a);
	printf("ptr_a + 1�� ��: %d",ptr_a+1); 
	//1�� ���ߴµ� 4�� ���� ���� ���� 
	// -> int�� 4byte �� ptr_a �� �ִ� �ּҰ���
	// 						����Ű�� �ڷ����� ũ�� ��ŭ ����
	
	printf("\n\n");
	
	int arr[10];
	int i=0;
	for (i=1; i<=10; i++){
		arr[i-1]=i;
		printf("&arr[%d] = %d\n",i,&arr[i]);	
		//�޸𸮸� 4byte�� ������ �ּ� ���� 4�� ���� 
		
		printf("arr + %d = %d\n" ,i,arr+i); 
	}
		
	printf("\n\n");
	for (i=0; i<10; i++){
		printf("%d ",arr[i]);
	}
	
	for (i=0; i<10; i++){
		printf("%d ",*(arr+i));
		// arr �ּ� �� + 4byte�� 
	}
	
	
	
	
} 
