// 포인터 (pointer) 가리키다
// 					변수의 주소를 저장하는 변수 
// 			a [20]
//	 _>	주소 : 1152
//  |
// ptr [1152]

#include <stdio.h>
int main(){
	int a= 20;
	char c = 'h'; 
	
	int *ptr_a; // 포인터는 앞에 * 를 붙힌다 
	char *ptr_c;
	
	ptr_a = &a; //scanf("%d" ,<<&a>>);  a의 주소값 저장
	
	printf("%d\n",ptr_a); // a의 주소값 출력
							//  주소값이 변경 안됨 

	printf("a의 값 : %d\n",a); // a에 저장된 값 
	printf("a의 주소값: %d\n", &a); // a의 주소 값  
	printf("ptr_a에 저장된 값 : %d\n" ,ptr_a); // a의 주소값  
	printf("ptr_a가 가리키는 변수의 값 : %d\n" ,*ptr_a); 
	// a에 저장된 값 ( * 를 쓰면 주소를 가지는 변수의 값을 출력)
	
	printf("\n\n"); 
	
	a=10;
	int b=20;
	
	int *ptr;
	
	ptr=&a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n" ,*ptr);
	
	ptr =&b;
	printf("ptr이 가리키는  변수에 저장된 값 : %d\n" ,*ptr);
	
	printf("\n\n");
	
	ptr=&a;
	*ptr = 20; // *ptr 는 a 가 되고 a에 20을 넣는 것;
	printf("%d\n" ,a);
	
	
	printf("\n\n");
	
	a=10;
	
	int **ptr_ptr; // 포인터를 가리키는 포인터 
	ptr_ptr = &ptr;
	
	printf(" a= %d\n",a);
	printf(" &a= %d\n",&a);
	
	printf(" ptr= %d\n",ptr);
	printf(" &ptr= %d\n",&ptr);
	
	printf(" ptr_ptr= %d\n",ptr_ptr);
	printf(" *ptr_ptr= %d\n",*ptr_ptr); 
	printf(" **ptr_ptr= %d\n" ,**ptr_ptr);
	 
	 
}
 
