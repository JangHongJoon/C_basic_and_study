// �迭 ����Ű�� �տ� 25�� �ٸ� 
#include <stdio.h>

int main(){
	int arr[3] = {1,2,3};
	int *ptr = arr; // �̰� �迭 �����Ͱ� �ƴ� ( 1. �� ã�ư�) 
	arr == &arr == ptr
	
	 arr[i] == *(arr + i) == *(ptr + i) == *(i + ptr)
	        == i[ptr]
	
	int i;
	
	for (i=0; i<3; i++){
		printf("%d\n",i[ptr]);
	}		
} 

/*
	1. arr == &arr[0] (ptr == &ptr[0])
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� �� 
*/

// int���� ���� �� �� -> 201 202 ������ ���־ 4byte��
// ���������� �迭�� ���� �� �� -> 201 202�������� 
// ��ü �迭�� �ּҸ� 0��° ������ ���, 4btye�� 

//int main(){
//	int arr[3] = {1,2,3};
//	
//	printf("arr = %d\n", arr);
//	printf("arr + 1 = %d\n",arr+1);
//	
//	printf("&arr = %d\n",&arr);
//	printf("&arr + 1 = %d\n",&arr + 1);
//	//    100 104 108
//	// a [   \   \   \   ] -> ��ü �迭�� ����� ���� 
//} 

int main(){
	int arr[3]={1,2,3};
	
	//1. �̰��� 
	int (*ptr_arr)[3]; //���� 3�� int�� �迭�� ����Ű�� �����͸� ���� 
	ptr_arr = &arr; 
	
	int i;
	for (i=0; i<3; i++){
		printf("%d\n",(*ptr_arr)[i]);
	} 
} 
