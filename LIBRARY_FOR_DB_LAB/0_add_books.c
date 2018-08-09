#include <stdio.h>

#define REGISTER_NEW_BOOK 0
#define SHOW_BOOKS 1

//�޴��� ���� ��ȣ ���� 
#define MAIN_MENU 0
#define EXIT_REENTER 1 

//å ���� ����ü 
typedef struct {
	char title[1000];
	char code[1000];
	char genre[1000];
	
}BOOK;

//å �� �� �� 
cntFor_Books=0;

//�޴��� ��� �Լ�
void printManual(int whichManual){
	if (whichManual == MAIN_MENU){
		printf("----------------------\n\n");
		printf("    0. REGISTER NEW BOOK\n\n");
		printf("    1. SHOW BOOKS\n\n");
		printf("----------------------\n\n");
		
	}
	
	else if (whichManual == EXIT_REENTER){
		printf("----------------------\n\n");
		printf("    0. EXIT              \n");
		printf("    1. RE-ENTER          \n\n");
		printf("----------------------\n\n");
	}
		
} 

void addNew_Book(); //å ���� �Է� �Լ� 
void printBooks(); //å ��� �Լ� 

BOOK b[100000]; 

int main(){
	
	while (1){
		
	printf("\n");
	
		printManual(MAIN_MENU);
		printf("    ENTER MODE : ");
		int mode;
		
		//��� �Է� 
		scanf("%d" ,&mode);
		switch(mode){
			case REGISTER_NEW_BOOK :
				addNew_Book();
				break;
			case SHOW_BOOKS :
				printBooks();
			default :
				break;			
		}
	}	
} 

//å ���� �Է� �Լ�
void addNew_Book(){
	
	char yorN;
	
	//å ���� ���Է� ����Ʈ 
	re_enterInfo: 
	
	//å ����, �ڵ�, �帣 �Է� 
	system("cls");
	printf("\n\n\n\n\n\n"); 
	printf("    ENTER BOOK TITLE : ");
	scanf("%[^\n]" ,b[cntFor_Books].title);
	printf("\n    ENTER BOOK CODE : ");
	scanf("%[^\n]",b[cntFor_Books].code);
	printf("\n    ENTER BOOK GENRE : ");
	scanf("%[^\n]",b[cntFor_Books].genre);
	
	//���� ���� 
	printf("\n\n[%s]    [%s]   [%s]\n" ,b[cntFor_Books].title,b[cntFor_Books].code,b[cntFor_Books].genre);
	printf("\nSAVE? (Y/n) : ");
	scanf("\n%c",&yorN); // �ٸ� ���� �� �Է� ������ ���� �� 
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
		// å ���� �ʱ�ȭ 
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

//å ��� �Լ�
void printBooks(){
	int i;
	printf("    TITLE               CODE              GENRE\n\n");
	for (i=0; i<cntFor_Books; i++){
			printf("    [%s]    [%s]   [%s]\n" ,b[i].title,b[i].code,b[i].genre);
	} 
} 
