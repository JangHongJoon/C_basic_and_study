#include <stdio.h>
#include <string.h>
int main(){
	char arr[101];
	int i;
	scanf("%s",arr);
	for (i=strlen(arr)-1; i>=0; i--){
		printf("%c",arr[i]);
	}
} 
