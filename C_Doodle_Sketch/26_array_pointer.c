// 배열 가리키기 앞에 25랑 다름 
#include <stdio.h>

int main(){
	int arr[3] = {1,2,3};
	int *ptr = arr; // 이건 배열 포인터가 아님 ( 1. 을 찾아가) 
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
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값 
*/

// int형을 선언 할 때 -> 201 202 번지가 되있어도 4byte씩
// 마찬가지로 배열을 선언 할 때 -> 201 202번지여도 
// 전체 배열의 주소를 0번째 방으로 삼고, 4btye씩 

//int main(){
//	int arr[3] = {1,2,3};
//	
//	printf("arr = %d\n", arr);
//	printf("arr + 1 = %d\n",arr+1);
//	
//	printf("&arr = %d\n",&arr);
//	printf("&arr + 1 = %d\n",&arr + 1);
//	//    100 104 108
//	// a [   \   \   \   ] -> 전체 배열의 사이즈를 더함 
//} 

int main(){
	int arr[3]={1,2,3};
	
	//1. 이거임 
	int (*ptr_arr)[3]; //길이 3인 int형 배열을 가리키는 포인터를 선언 
	ptr_arr = &arr; 
	
	int i;
	for (i=0; i<3; i++){
		printf("%d\n",(*ptr_arr)[i]);
	} 
} 
