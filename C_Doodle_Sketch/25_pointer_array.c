#include <stdio.h>

int main(){
	int a=10;
	int *ptr_a =&a;
	
	printf("ptr_a 의 값 : %d\n" ,ptr_a);
	printf("ptr_a + 1의 값: %d",ptr_a+1); 
	//1을 더했는데 4를 더한 값이 나옴 
	// -> int는 4byte 라서 ptr_a 에 있는 주소값은
	// 						가리키는 자료형의 크기 만큼 증가
	
	printf("\n\n");
	
	int arr[10];
	int i=0;
	for (i=1; i<=10; i++){
		arr[i-1]=i;
		printf("&arr[%d] = %d\n",i,&arr[i]);	
		//메모리를 4byte씩 나눠서 주소 값이 4씩 증가 
		
		printf("arr + %d = %d\n" ,i,arr+i); 
	}
		
	printf("\n\n");
	for (i=0; i<10; i++){
		printf("%d ",arr[i]);
	}
	
	for (i=0; i<10; i++){
		printf("%d ",*(arr+i));
		// arr 주소 값 + 4byte씩 
	}
	
	
	
	
} 
