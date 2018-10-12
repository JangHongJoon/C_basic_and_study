 #include <stdio.h>
 int main(){
 	int x;
 	int *xp; //xp는 int 형의 포인터 변수로 선언됨 
 	
 	x=7; // 변수 x 의 초기화 
 	xp=&x; //변수 xp가 x의 주소값으로 초기화
	
	printf("%p -> 변수 x의 주소\n",&x);
	printf("%d -> 변수 x의 값\n",x);
	printf("%p -> 포인터 변수 xp 의 주소\n",&xp);
	printf("%p -> 포인터변수 xp 의 값\n",xp);
	printf("%d -> xp가 가리키는 곳\n",*xp);
 }
