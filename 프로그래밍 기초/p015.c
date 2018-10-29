#include <stdio.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	//1초당 18.12메가비트
	// 2.20 메가바이트 파일 보낼때
	
	a/=8;
	printf("%.2lfsec",b/a); 
}
