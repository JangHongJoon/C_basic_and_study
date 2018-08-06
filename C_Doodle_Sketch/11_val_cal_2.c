#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d" ,&a ,&b);
	
	
	//bool 진리값 저장용 변수 (1바이트) 
	int p = a > b;
	int q = a < b;
	int r = a == b;
	
	printf("%d %d %d\n",p,q,r); 
}

//bool 할 때 오류로 컴파일 불가 ?
