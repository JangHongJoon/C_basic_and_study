/*
	char -> 8bit
	"A" -> 문자열
	'A' -> 문자
	
	ex) char x='A';
	
	8bit 로 나타내서 -128<char< 127 - >문자 처리 가능 

	_Bool 형
	사실상은 정수형 
	true ->1
	false ->0 
	
	float, double 형 
	 
*/

#include <stdio.h>

int main(){
	float k=0.000000000012345678;
	 
	printf("%d : %c\n",'ㄱ','ㄱ');
	printf("%f %e\n",k,k);	

	float aboat = 32000.0;
	double abet = 2.14e9;
	printf("%f",aboat);


	

} 
