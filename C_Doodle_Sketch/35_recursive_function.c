// ��� �Լ� 
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


//�������� ��Ƽ� return ���� �����ֱ� 
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

//���丮��

int factorial(int n){
	if (n<=1) return 1; 
	return n * factorial(n-1);
}


int main(){
	int n;
	scanf("%d" ,&n);
	printf("%d\n" ,factorial(n)) ;
	
} 
