#include <stdio.h>
int f(int x);
int main(){
	int n;
	scanf("%d" ,&n);
	
	while (1){
		int k=f(n);
		if (k==1){
			printf("HAPPY");
			break;
		}
		else if (n==k || k==4){
			printf("UNHAPPY");
			break;
		}	
		n=k;
	}
		
}

int f(int x){
	if (x==0) return 0;
	int k=f(x/10);
	return (x%10)*(x%10)+k;
}
