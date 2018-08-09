#include <stdio.h>

#define SHOW_BOOKS 0

//메뉴얼 고유 번호 지정 
#define MAIN_MENU 0
#define EXIT_REENTER 1 

//책 정보 구조체 
typedef struct {
	char title[1000];
	char code[1000];
	char genre[1000];
	
}BOOK;

//메뉴얼 출력 함수
void printManual(int whichManual){
	if (whichManual == MAIN_MENU){
		printf("----------------------\n\n");
		printf("    0. REGISTER NEW BOOK\n\n");
		printf("----------------------\n\n");
		
	}
	
	else if (whichManual == EXIT_REENTER){
		printf("----------------------\n\n");
		printf("    0. EXIT              \n");
		printf("    1. RE-ENTER          \n\n");
		printf("----------------------\n\n");
	}
		
} 

//책 정보 입력 함수 
void addNew_Book();
void printBook();

BOOK b; 

int main(){
	
	while (1){
		
	printf("\n");
	
		printManual(MAIN_MENU);
		printf("    ENTER MODE : ");
		int mode;
		
		//모드 입력 
		scanf("%d" ,&mode);
		switch(mode){
			case REGISTER_NEW_BOOK :
				addNew_Book();
				break;	
			default :
				break;			
		}
	}	
} 

void addNew_Book(){
	
	char yorN;
	
	//책 정보 재입력 포인트 
	re_enterInfo: 
	
	//책 제목, 코드, 장르 입력 
	system("cls");
	printf("\n\n\n\n\n\n"); 
	printf("    ENTER BOOK TITLE : ");
	scanf("%s" ,b.title);
	printf("\n    ENTER BOOK CODE : ");
	scanf("%s",b.code);
	printf("\n    ENTER BOOK GENRE : ");
	scanf("%s",b.genre);
	
	//저장 여부 
	printf("%s %s %s\n" ,b.title,b.code,b.genre);
	printf("\nSAVE? (Y/n) : ");
	scanf("\n%c",&yorN); // 다른 문자 더 입력 받으면 버그 뜸 
	if (yorN=='Y' || yorN=='y'){
		system("cls");
		printf("    SAVED\n");
		 
		printManual(EXIT_REENTER);
		
		int mode;
		printf("    ENTER MODE : ");
		scanf("%d",&mode);
		
		if (mode == 0){
			system("cls");
			return ;
		}
		else goto re_enterInfo;
	}
	
	else if (yorN=='N'|| yorN=='n'){
		// 책 정보 초기화 
		b.title[0]="\0";
		b.code[0]="\0";
		b.genre[0]="\0"; 
		system("cls");
		printf("    CANCELED\n");
		 
		printManual(EXIT_REENTER);
		
		int mode;
		printf("ENTER MODE : ");
		scanf("%d",&mode);
		
		if (mode == 0){
			system("cls");
			return ;
		}
		else goto re_enterInfo;
	}

	
}
