// 재귀 함수 
//recursion
 
#include <stdio.h>

/*
void rec(){
	printf("***\n");
	rec();
} 

int main(){
	rec();
}
*/


//기준점을 잡아서 return 지점 정해주기 
/*
void rec(int n){
	if (n > 5) return; 
	printf("n = %d\n",n);
	rec(n+1);
}

int main(){
	rec(1);
} 
*/

//팩토리얼

int factorial(int n){
	if (n<=1) return 1; 
	return n * factorial(n-1);
}


int main(){
	int n;
	scanf("%d" ,&n);
	printf("%d\n" ,factorial(n)) ;
	
} 
