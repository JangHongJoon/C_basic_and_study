#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	
	int i,sw=1;
	for (i=2; i*i<=n; i++){
		if (n%i==0) {
			sw=0; 
			break;
		}
	}
	if (sw==1) printf("�Ҽ��Դϴ�\n");
	else printf("�Ҽ��� �ƴմϴ�\n");
	return 0; 
} 
