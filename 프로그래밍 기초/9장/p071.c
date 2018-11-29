#include <stdio.h>
void to_base_n(int x, int k);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	to_base_n(a,b);
} 

void to_base_n(int x, int k){
	if (x==0) return ;
	else to_base_n(x/k,k);
	
	printf("%d",x%k);
}
