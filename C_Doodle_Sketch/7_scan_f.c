#include <stdio.h>
int main(){
/*
	int a,b;
	
	scanf("%d%d" ,&a ,&b); // & : 포인터 
	
	
	console 창 
	16 7을 읽어내서( space(공백) 은 무시하고)
	 하나의 %d로 읽어냄 ( 인식됨) 
	 
	
	
	int hap = a+b;
	int minus = a-b;
	int	multiply = a*b;
	int mok = a/b;
	
	printf("%d\n%d\n%d\n%d\n---------\n" ,hap,minus,multiply,mok);
*/	
	
	//실수 입력 
	float f=3.14;
	
	printf("%f\n" ,f); 
	float a,b;
	scanf("%f%f",&a,&b);
	float hap = a+b;
	float minus = a-b;
	float multiply = a*b;
	float mok = a/b;
	
	printf("%f\n%f\n%f\n%f\n---------\n" ,hap,minus,multiply,mok);
}
