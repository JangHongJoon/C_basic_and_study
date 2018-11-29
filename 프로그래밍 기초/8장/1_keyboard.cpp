#include <stdio.h>
#include <strdlib.h> // for exit() 
int main(){
	// 파일 - 정보가 저장되어 있는 메모리
	// low-level I/O
	// standard I/O package
	
	//스트림 = 실제의 입력이나 출력이 매피된 데이터의 흐름
	//키보드 입력 - stdin, stdout (C프로그램에 의해 자동으로 열리는 파일처럼 다루어짐)
	
	/*
		EOF - 컴퓨터에서 더 이상 읽을 것이 없는 것을 의미 (-1, End Of File)
		
		* char 는 unsigned  로 인식 할 때가 있다 
		그래서 EOF 할 때는 int 로 변수 설정 
	*/
	
	int ch; 
	FILE * fp // 파일을 사용하기 위한 것
	printf("Enter the name of the file: ");
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("Failed\n");
		exit(1);
	}
	
	while ((ch == getc(fp)) != EOF)
		putchar(ch);
	
	fclose(fp); // close the file
	return 0;
}
