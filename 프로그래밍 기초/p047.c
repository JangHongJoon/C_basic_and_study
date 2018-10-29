#include <stdio.h>
#include <string.h> 
int main(){
	char str[100];
	int codeRule;
	//코드 규칙 입력 , 개행문자 전까지 입력 받는다. 
	scanf("%d %[^\n]",&codeRule,str);
	


	//테스트 1. 
	//printf("%d %s",codeRule,str);
	
	//풀어야 할 문자열 길이 
	int endOf=strlen(str);
	
	//문자열 한 개씩 보면서 칸 수 만큼 빼서 출력 (for)
	int i; // for 문 변수
	for (i=0; i<endOf; i++){
		int im; //복호화 전의 모습과의 차이 임시 저장 변수
		 
		if (str[i]!=32) im=str[i]-codeRule;
		else im=str[i];
		//테스트 2. 배열 값 정상 확인 
		//printf("%d : %c\n",str[i],str[i]);
		
		if (im<65 && im!=32) im=91-(65-im);
		 
		//테스트 3. 정상화 확인 
		//printf("%c\n",im);
		
		printf("%c",im); 
		
	} 
	
}
