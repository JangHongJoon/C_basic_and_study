//��� : ������ �ʴ� �� 

/*
#include <stdio.h>

#define PI 3.14159 // ��ũ�� 

int main(){ 
	// const float PI=3.141592  
	// --> pi �� float ���� ��� �Դϴ� 
	
	printf("��= %.2lf\n",PI);
	// printf("&PI = %d\n",&PI); 
	// --> #define �� ���� �ּҰ� �Ҵ��� ������
	
	//PI =0 ==> 3.141592 =0 �� ������ �ȵ� 
}

*/

#include <stdio.h>

enum EGAMESTATE{
	GAME_STATE_MAINMENU, // =0 ���� �� ���� ���� ���� 
	GAME_STATE_PLAYING ,
	GAME_STATE_PAUSED,
	GAME_STATE_GAMEOVER;
};


int main(){
	int currState = GAME_STATE_MAINMENU;
	
	while (true){
		switch (currState){
			case GAME_STATE_MAINMENU:
				break;
				
			case GAME_STATE_PLAYING:
				break;
			
			case GAME_STATE_PAUSED:
				break;
			
			case GAME_STATE_GAMEOVER:
				break;
			
		}
	}
} 
