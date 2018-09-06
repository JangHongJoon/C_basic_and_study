#include <stdio.h>
int div(int a, int b){
	if (a%b==0)
		return b;
	else
		return div(b,a%b);
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int f=div(a,b);
	
	//printf("%d %d %d\n",f,(a/f),(b/f));
	printf("%d",f*(a/f)*(b/f));
	return 0;
} 
