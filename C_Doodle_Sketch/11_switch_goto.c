#include <stdio.h>
int main(){
	//switch
	/*
	int choice;
	
	makeChoice:
		
	scanf("%d" ,&choice);
	switch(choice){
		case 1:
			printf("�� ����\n");
			break;
		
		case 2:
			printf("�ҷ�����\n");
			break;
		
		case 3:
			printf("����\n");
			break;
		
		case 4:
			printf("ũ����\n");
			break;
			
		default:
			printf("�߸� �Է��ϼ̽��ϴ�\n");
			goto makeChoice;
			break; 
	} 
	*/
	
	int i=1;
	repeat:
	printf("%d\n",i);
	if (i<10){
		i++;
		goto repeat;
	}
}
