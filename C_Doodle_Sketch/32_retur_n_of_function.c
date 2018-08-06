#include <stdio.h>
//
//// 두개의 매개변수(정수)의 합을 반환
//
//// 어떤 형식으로 반환?
//int plus(int a, int b){
//	return a+b; // return 값이 없으면 에러 뜸 
//} 
//
//// main은 반환 값이 없어도 잘 돌아간다?
//// -> 자동 return 0; 을 함 
//int main(){
//	/*
//	int a;
//	
//	a = printf("aaa\n"); //--> 반환값을 가진다고 함
//	//출력된 문자들의 개수를 반환 
//	printf("%d\n" ,a); 
//	*/
//	
//	int sum = plus(3,5);
//	printf("%d\n",sum);
//}

void noMeaning(){
	printf("first\n");
	return ; // 리턴을 만나면 즉시 함수는 종료된다. 
	// 실행 안되는 코드가 됨 
	printf("second\n");
	return 2;
	
}

int main(){
	int a;
	noMeaning();
	printf("반환된 값 : %d\n" ,a); 
}
