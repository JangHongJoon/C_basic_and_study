#include <stdio.h>

#define REGISTER_NEW_BOOK 0
#define SHOW_BOOKS 1
#define SEARCH_BOOKS 2
//메뉴얼 고유 번호 지정 
#define MAIN_MENU 0
#define EXIT_REENTER 1 
#define EXIT 2
//책 정보 구조체 
typedef struct {
	char title[1000];
	char code[1000];
	char genre[1000];
	
}BOOK;

//책 총 권 수 
cntFor_Books=0;

//메뉴얼 출력 함수
void printManual(int whichManual){
	if (whichManual == MAIN_MENU){
		printf("----------------------\n\n");
		printf("    0. REGISTER NEW BOOK\n\n");
		printf("    1. SHOW BOOKS\n\n");
		printf("    2. SEARCH BOOKS\n\n");
		printf("----------------------\n\n");
		
	}
	
	else if (whichManual == EXIT_REENTER){
		printf("----------------------\n\n");
		printf("    0. EXIT              \n");
		printf("    1. RE-ENTER          \n\n");
		printf("----------------------\n\n");
	}
	
	else if  (whichManual == EXIT){
		printf("----------------------\n\n");
		printf("    0. EXIT              \n");
		printf("----------------------\n\n");
	}
		
} 

void addNew_Book(); //책 정보 입력 함수 
void printBooks(); //책 출력 함수 
void searchBooks(); // 책 검색 및 출력 함수 
BOOK b[100000]; 

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
			
			case SHOW_BOOKS :
				printBooks();
				break;
			
			case SEARCH_BOOKS : 
				searchBooks();
				break;
				
			default :
				break;			
		}
	}	
} 

//책 정보 입력 함수
void addNew_Book(){
	
	char yorN;
	
	//책 정보 재입력 포인트 
	re_enterInfo: 
	
	//책 제목, 코드, 장르 입력 
	system("cls");
	printf("\n\n\n\n\n\n"); 
	//에러 포인트 ( 입력 안 시키고도 이미 입력 되서... 
	//아무 데이터도 입력 불가능
	printf("    ENTER BOOK TITLE : ");
	//fgets(b[cntFor_Books].title,1000,stdin); 
	scanf("%s" ,b[cntFor_Books].title);
	printf("\n    ENTER BOOK CODE : ");
	scanf("%s",b[cntFor_Books].code);
	printf("\n    ENTER BOOK GENRE : ");
	scanf("%s",b[cntFor_Books].genre);

	//저장 여부 
	printf("\n\n[%s]    [%s]   [%s]\n" ,b[cntFor_Books].title,b[cntFor_Books].code,b[cntFor_Books].genre);
	printf("\nSAVE? (Y/n) : ");
	scanf("\n%c",&yorN); // 다른 문자 더 입력 받으면 버그 뜸 
	if (yorN=='Y' || yorN=='y'){
		system("cls");
		printf("    SAVED\n");
		cntFor_Books++;
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
		b[cntFor_Books].title[0]="\0";
		b[cntFor_Books].code[0]="\0";
		b[cntFor_Books].genre[0]="\0"; 
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

//책 출력 함수
void printBooks(){
	int i;
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("    TITLE\t\tCODE\t\tGENRE\n\n");
	for (i=0; i<cntFor_Books; i++){
			printf("    [%s]\t[%s]\t[%s]\n" ,b[i].title,b[i].code,b[i].genre);
	} 
	printf("\n");
	printManual(EXIT);
	
	int mode;
	printf("ENTER MODE : ");
	scanf("%d",&mode);
	if (mode == 0){
			system("cls");
			return ;
	}
} 

// 책 검색 및 출력 함수
void searchBooks(){
	char searchKey[1000];
	
	scanf("%s",searchKey);
	return ;
} 
 
