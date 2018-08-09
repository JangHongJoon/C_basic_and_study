#include <stdio.h>

typedef struct { int x,y; } Point; 

int main(){
   // typedef struct { int x,y;	} Point;// 여러개의 변수를 하나로 묶는다 

	Point p; // p 는 Point 라는 형을 가짐 
	
	/*
		typedef strruct {int x,y;} p; 
		
		도 가능 
	*/

	p.x=3;
	p.y=4;
	
	printf("(%d %d)\n",p.x,p.y);
	printf("%d\n",sizeof(p));
	
} 
