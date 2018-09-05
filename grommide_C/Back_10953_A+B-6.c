#include <stdio.h>
int main(){
	char a[4];
	int n;
	scanf("%d",&n);
	
	int i;
	for (i=0; i<n; i++){
		scanf("%s",a);
		printf("%d\n", (a[0]-48)+(a[2]-48));
	}
} 
