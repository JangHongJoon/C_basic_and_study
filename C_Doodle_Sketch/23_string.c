#include <stdio.h>
#include <string.h>
/*
int main(){
	char arr[] = "Hello,world!"; 
	//sizeof(arr) 출력하면 13 이 출력 : 맨 뒤에 NULL 값  
	printf("%d\n" ,sizeof(arr)); 
	printf("%s\n",arr); //%s 문자열 출력  
} 
*/

int main(){
	char s[100];
	char str2[100];
	char str[]="Hello";
	scanf("%s",s);
	printf("%s\n",s);
	
	int len = strlen(str);
	printf("%d\n",len);
	
	strcpy(str2,str); 
	// 문자열 전체 복사 -> 앞에 받는 배열, 뒤에 원본 
	printf("%s\n",str2);
	
	strcat(str,"World!"); 
	// 기존 문자열 뒤에 다른 문자열 붙히는 함수  
	printf("%s\n" ,str);
	
	int cmp= strcmp(str,str2);
	 // 사전적 순서 따지는 함수 
	 printf("%d\n",cmp); 
}
