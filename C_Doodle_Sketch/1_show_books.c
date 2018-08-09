#include <stdio.h>

#define SHOW_BOOKS 0

//�޴��� ���� ��ȣ ���� 
#define MAIN_MENU 0
#define EXIT_REENTER 1 

//å ���� ����ü 
typedef struct {
	char title[1000];
	char code[1000];
	char genre[1000];
	
}BOOK;

//�޴��� ��� �Լ�
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

//å ���� �Է� �Լ� 
void addNew_Book();
void printBook();

BOOK b; 

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
			default :
				break;			
		}
	}	
} 

void addNew_Book(){
	
	char yorN;
	
	//å ���� ���Է� ����Ʈ 
	re_enterInfo: 
	
	//å ����, �ڵ�, �帣 �Է� 
	system("cls");
	printf("\n\n\n\n\n\n"); 
	printf("    ENTER BOOK TITLE : ");
	scanf("%s" ,b.title);
	printf("\n    ENTER BOOK CODE : ");
	scanf("%s",b.code);
	printf("\n    ENTER BOOK GENRE : ");
	scanf("%s",b.genre);
	
	//���� ���� 
	printf("%s %s %s\n" ,b.title,b.code,b.genre);
	printf("\nSAVE? (Y/n) : ");
	scanf("\n%c",&yorN); // �ٸ� ���� �� �Է� ������ ���� �� 
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
		// å ���� �ʱ�ȭ 
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
