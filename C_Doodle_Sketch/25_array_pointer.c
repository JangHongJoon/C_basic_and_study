#include <stdio.h>

//int main(){
//	int a=10,b=20;
//	
//	int *ptr_a = &a;
//	int *ptr_b = &b;
//	
//	printf("ptr_a�� �� : %d\n",ptr_a);
//	printf("ptr_b�� �� : %d\n",ptr_b);
//	
//	printf("ptr_a + 1�� �� %d\n",*ptr_a - 1;
//	
//}
//
///*
//	�� �ּҰ��� �־��� �� ���������� �Ǵ� ����.. 
//*/
//
//
///*
//
//		
//\
//\
//\
//\	  4byte (int ��)
//\	a [  \  \  \  \  ]   b [  \  \  \  \  ]
//\	                     ^
//\                        \
//\                      ptr_a+1
//\
//\
//\
//*/


//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i;
//	printf("arr�� �� : %d\n",&arr); // �迭 ù ��° ���� �� 
//	//arr == &arr[0]
//	// �ּҰ��� +1 �� �ϸ� ����� �ڷ����� ũ�� ��ŭ ����
//	// �׷��Ƿ� arr+1 ==> &arr[0]+1	 
//	for (i=0; i<10; i++){
//		printf("&arr[%d] = %d\n",i, &arr[i]);
//		printf("arr + %d = %d\n",i,arr+i);
//	}
//}
//
//
///*
//\
//\
//\		100  104 ... (�ּҰ��� 4�� ���� (int ��)) 
//\  arr [    \   \   \   \   \   \   \   \   ]
//\
//\
//\
//*/



int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
		 
	for (i=0; i<10; i++){
		printf("%d ",*(arr + i));
		
	}
	printf("\n");
	int *ptr;
	for (ptr = arr; ptr < arr + 10; ptr++){
		printf("%d ",*ptr);
	}
	printf("\n");
	
}
