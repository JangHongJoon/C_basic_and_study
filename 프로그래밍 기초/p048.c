#include <stdio.h>
#include <string.h>
int main(){
	char arr[60];
	int balance=0;
	int p=0;
	
	scanf("%[^\n]",arr);
	int len=strlen(arr);
	while (p<len){
		
		if (arr[p]=='(') balance++;
		else if (balance>=1 && arr[p]==')') balance-=1;
		else if (balance==0 && arr[p]==')') {
			balance-=1;
			break;
			
		}
		p++;
	//	printf("%c %d %d\n",arr[p],cntR,cntL);
	}
	if (balance==0) printf("YES");
	else printf("NO");
}
