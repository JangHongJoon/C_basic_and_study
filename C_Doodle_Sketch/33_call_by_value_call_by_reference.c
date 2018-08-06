// call-by-value --> 함수로 값만 넘겨주는 것 
//call-by-reference --> 주소 값을 넘겨주는 것 ( 함수 간에 지역변수 값 수정 가능 

#include <stdio.h>
    //   (int *a, int *b) 단 함수 호출 할 때 (&a , &b) 
void swap(int &a, int &b){ // 충돌하지 않음 , 주소값 저장 
	
	int tmp;
	//        a[ 2] b[ 3]
	tmp = *a;//tmp[2] a[2]
	*a = *b;  //a[3]  b[3]
	*b = tmp; // b[2] tmp[2]
			// 	a[3] b[2] 
			
}

int main(){
	int a,b;
	
	// a 와 b의 값을 서로 서로 바꿔보자 
	scanf("%d%d",&a,&b);
	
	//잘못된 경우 
	//        a[ 2] b[ 3]
	// a =b;  a[ 3] b[ 3]
	// b = a; a[ 3] b[ 3]	
	
	swap(a,b); //절대 작동하지 않음 -> 지역변수라서 값은 그대로임 
			
	printf("%d %d\n",a,b);
}

/*
	함수 간 작용 개념도
	
	100   200
	a [2] b [3]   x [100] y[200]
	
	tmp = *x; (a의 값 tmp에 저장) 
	*x = *y; (b의 값 a에 저장)
	*y = tmp; (tmp의 값 b에 저장) 
*/
