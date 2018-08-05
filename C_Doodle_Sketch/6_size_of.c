#include <stdio.h>

int main(){
	/*
	printf("%d %d %d %d\n", sizeof(int) , sizeof(char) \
			, sizeof(float) , sizeof(double)) ;
	int a; char b; float c;
	double d;
	
	printf("%d %d %d %d", sizeof(a), sizeof(b)\
	, sizeof(c), sizeof(d));
	
*/

/*
	int a=3.14;
	double b=10;
	printf("%d %f", a,b);
	// 정수형에 실수는 넣을 수 없음
	//실수형에 정수를 넣을 수 있음	
*/

	int math =90, korean=95, english=96;
	int sum=math+korean+english;
	double avg=(double)sum / 3; //(double)은 잠시 sum을 실수형으로 
	
	printf("%f\n",avg);
	
	int a = 5/3;
	
	//정수 / 정수 = 정수
	//실수 / 정수 = 실수
	//실수 / 실수 = 실수
	 
	 
	 //정수 + 정수 = 정수
	 //정수 + 실수 = 실수
	 //실수 + 실수 = 실수 
	 
	 //빼기, 곱하기 도 다 같음 
}

//sizeof(x) : x의 크기를 알려줌
// x : 형 (int, float, ...)
// 변수 이름 
