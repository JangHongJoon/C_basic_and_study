#include <stdio.h>

//int main(){
//	int a=10,b=20;
//	
//	int *ptr_a = &a;
//	int *ptr_b = &b;
//	
//	printf("ptr_a의 값 : %d\n",ptr_a);
//	printf("ptr_b의 값 : %d\n",ptr_b);
//	
//	printf("ptr_a + 1의 값 %d\n",*ptr_a - 1;
//	
//}
//
///*
//	왜 주소값이 주어질 때 내림순으로 되는 거지.. 
//*/
//
//
///*
//
//		
//\
//\
//\
//\	  4byte (int 형)
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
//	printf("arr의 값 : %d\n",&arr); // 배열 첫 번째 방의 값 
//	//arr == &arr[0]
//	// 주소값에 +1 을 하면 선언된 자료형의 크기 만큼 증가
//	// 그러므로 arr+1 ==> &arr[0]+1	 
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
//\		100  104 ... (주소값이 4씩 증가 (int 형)) 
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
