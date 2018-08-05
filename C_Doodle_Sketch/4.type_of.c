#include <stdio.h>
int main(){
	// int : 32비트 ( 4바이트), 정수를 담는 데 쓰임
	/*
	int a = 5;
	int b = 3;
	
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;
	
	printf("%d + %d = %d\n" ,a,b,hap);
	printf("%d - %d = %d\n" ,a,b,cha);
	printf("%d * %d = %d\n" ,a,b,gop);
	printf("%d / %d = %d\n" ,a,b,mok);
	printf("%d % %d = %d\n" ,a,b,namuji);
	*/
	
	
	// float : 32비트 ( 4바이트), 실수를 담는 데 쓰임
	/*
	float a = 9.8;
	float b = 3.14; // 3.14 = 314 *( 10 -2 승 )
	
	
		-----------------------------
		\ + \ -2  \  314             \
		------------------------------
		 
	*/
	/*
	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;
	// float namuji = a % b; // 이건 실수형으로 안됨 
	/*
	printf("%lf + %lf = %lf\n" ,a,b,hap);
	printf("%lf - %lf = %lf\n" ,a,b,cha);
	printf("%lf * %lf = %lf\n" ,a,b,gop);
	printf("%lf / %lf = %lf\n" ,a,b,mok);
	//printf("%d % %d = %d\n" ,a,b,namuji);
	
	
	
		용량이 작아서 오차가 발생하게 됨
		그래서 double을 많이 씀
	*/
	
	
	
	// double : 64비트 ( 8바이트), 실수를 담는 데 쓰임
	
	double a = 9.8;
	double b = 3.14; // 3.14 = 314 *( 10 -2 승 )
	
	/*
		-----------------------------
		\ + \ -2  \  314             \
		------------------------------
	
	*/
	
	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;
	// double namuji = a % b; // 이건 실수형으로 안됨 
	
	printf("%lf + %lf = %lf\n" ,a,b,hap);
	printf("%lf - %lf = %lf\n" ,a,b,cha);
	printf("%lf * %lf = %lf\n" ,a,b,gop);
	printf("%lf / %lf = %lf\n" ,a,b,mok);
	//printf("%d % %d = %d\n" ,a,b,namuji);
	
	//부동소수점 ( floating point) 
	// -> 한 번 더 보세요... 
	
} 
