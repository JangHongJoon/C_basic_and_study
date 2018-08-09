//type define
//형을 정의 

/*
#include <stdio.h>
int main(){
	typedef int int32; // int 형으로 int32라는 자료형을 만든다.	
	int32 n=20; // int32

	printf("%d\n" ,n);
	printf("%d\n",sizeof(int32)); 
}
*/

/*
#include <stdio.h>
int main(){
	typedef int Pair[2]; // Pair[2] int 형 배열을 정의 
	
	Pair point[2]={3,4}; //int point[2] ={3,4}; 와 같음
	 
	printf("(%d %d)" ,pointer[0],pointer[1]); 
	
}
*/

#include <stdio.h>
int main(){
	typedef char *String; // 특별한 의미로 자료형 선언 할 때 
	
	String *name = "Doodle"; // 포인터에 문자를 담을 수 있다
	 						 // char *name = 
	
}
