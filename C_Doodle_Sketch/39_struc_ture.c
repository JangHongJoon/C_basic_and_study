#include <stdio.h>

typedef struct { int x,y; } Point; 

int main(){
   // typedef struct { int x,y;	} Point;// �������� ������ �ϳ��� ���´� 

	Point p; // p �� Point ��� ���� ���� 
	
	/*
		typedef strruct {int x,y;} p; 
		
		�� ���� 
	*/

	p.x=3;
	p.y=4;
	
	printf("(%d %d)\n",p.x,p.y);
	printf("%d\n",sizeof(p));
	
} 
