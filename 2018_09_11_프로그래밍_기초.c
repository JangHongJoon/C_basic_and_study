/*

Keywords :
 - int, short, long, unsigned, char, float, double, _Bool, _Complex, _imaginary 등...
 
 	C언어 정적 data type -> 선언문	 
	 Python : d 동적 data type
	 
	 data => 수 - 정수 
	 			- 실수 123.56 -> 0.12356 *( 10의 3승) 
				 
				  
	 정수형과 부동 소수점형 
	 	- Integer (정수형) 
	 		메모리 -> 	0 0 0 0 0 1 1 1
	 			
		- Floating - point (부동 소수점형) -> float 형 
		
			부호   실수 부분 
 			+  3  .314159 -> 314.159  
		  sign exponent fraction 
		  
		  1. 1 1111...
		  2. 1 1의보수
		  3. 1 2의보수 
		  
		  
		  int 정수형 종류
		  short (int), long (int), long long (int), unsigned (int),
		  16it,        32bit,    64bit,            음수는 안됨, 두 배로 늘어남
		  
		  
		  
		 
		overflow -> 범람 
		
		int i = 2147483647;
	unsigned int j = 4294967295;
	
	printf("%d %d %d\n",i ,i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);
	
	result : 
	
		   
	printf에서 
	%d , %u -> 대로 해석함 
	
	long long 상수
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
