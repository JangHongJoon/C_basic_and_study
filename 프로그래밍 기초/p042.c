#include <stdio.h>
int main(){
	int a,b,im;
	scanf("%d %d",&a,&b);
	while (b!=0){
		im=a%b;
		a=b;
		b=im;
		
	}
	printf("%d",a);
}
