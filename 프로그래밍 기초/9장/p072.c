#include <stdio.h>
unsigned long long f(int i, unsigned long long x, unsigned long long y);
//	unsigned long long arrN[100]={0, 1, 1};
int main(){
	int n;
//	printf("%.lf\n",pow(10.0,3.0));
	while (1){
		scanf("%d" ,&n);
		if (n<0) break;
		else if (n==0) printf("#0: 0\n");
		else if (n==1 || n==2) printf("#%d: 1\n",n);
		else printf("#%d: %llu\n",n,f(n,1,1));
	}
}

unsigned long long f(int i, unsigned long long x, unsigned long long y){
	if (i==2) return x;
	return f(i-1,x+y,x);
}



