#include <stdio.h>

#define REGISTER_NEW_BOOK 0
#define SHOW_BOOKS 1
#define SEARCH_BOOKS 2
//�޴��� ���� ��ȣ ���� 
#define MAIN_MENU 0
#define EXIT_REENTER 1 
#define EXIT 2
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

void addNew_Book(); //å ���� �Է� �Լ� 
void printBooks(); //å ��� �Լ� 
void searchBooks(); // å �˻� �� ��� �Լ� 
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
				break;
			
			case SEARCH_BOOKS : 
				searchBooks();
				break;
				
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
	//���� ����Ʈ ( �Է� �� ��Ű�� �̹� �Է� �Ǽ�... 
	//�ƹ� �����͵� �Է� �Ұ���
	printf("    ENTER BOOK TITLE : ");
	//fgets(b[cntFor_Books].title,1000,stdin); 
	scanf("%s" ,b[cntFor_Books].title);
	printf("\n    ENTER BOOK CODE : ");
	scanf("%s",b[cntFor_Books].code);
	printf("\n    ENTER BOOK GENRE : ");
	scanf("%s",b[cntFor_Books].genre);

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

// å �˻� �� ��� �Լ�
void searchBooks(){
	char searchKey[1000];
	
	scanf("%s",searchKey);
	return ;
} 
 
