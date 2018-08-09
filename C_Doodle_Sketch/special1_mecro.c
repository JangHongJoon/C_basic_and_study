/*
#include <stdio.h>
#define PRINT_HELLO printf("Hello, World");

int main(){
	PRINT_HELLO
}
*/

#include <stdio.h>
#define SQUARE(X) X * X

int main(){
	int a;
	scanf("%d" ,&a);
	printf("%d\n",SQUARE(a));
	// 100 / SQUARE(a) == 100 / a * a == 
}
