#include <stdio.h>
int main(){
	int a=100;
	int h;
	h = (a<100) ? a-a : a+a;
	printf("%d\n",h);
}
